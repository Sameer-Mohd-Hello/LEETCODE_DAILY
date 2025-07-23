#include <iostream>
#include <math.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int dataue)
    {
        data = dataue;
        next = NULL;
    }
};

Node *head = NULL;

void insert(int dataue)
{
    Node *newnode = new Node(dataue);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL";
}
class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *p = NULL;
        Node *c = head;
        Node *n;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
    int getDecimaldataue(Node *head)
    {
        Node *newHead = reverse(head);
        int data = 0;
        int sum = 0;
        while (newHead != NULL)
        {
            sum += newHead->data * pow(2, data);
            data++;
            newHead = newHead->next;
        }
        return sum;
    }
};

int main()
{
    insert(1);
    insert(0);
    insert(1);
    display();
    cout << endl;
    Solution obj;
    cout << "The decimal value is : " << obj.getDecimaldataue(head);
}
