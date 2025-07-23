#include <iostream>
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
    Node *newNode = new Node(dataue);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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
    Node *addOne(Node *head)
    {
        head = reverse(head);
        int carry = 1;
        Node *temp = head;
        while (temp && carry)
        {
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum / 10;
            if (!temp->next && carry)
            {
                temp->next = new Node(0);
            }
            temp = temp->next;
        }
        return reverse(head);
    }
};

int main()
{
    insert(1);
    insert(9);
    display();
    cout << endl;
    Solution obj;
    head = obj.addOne(head);
    cout << endl;
    display();
}
