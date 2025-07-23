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
    Node *reverseList(Node *head)
    {
        Node *left = NULL;
        Node *current = head;
        Node *right = NULL;
        while (current != NULL)
        {
            right = current->next;
            current->next = left;
            left = current;
            current = right;
        }
        return left;
    }
};

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
    cout << endl;
    Solution obj;
    head = obj.reverseList(head);
    cout << endl;
    display();
}
