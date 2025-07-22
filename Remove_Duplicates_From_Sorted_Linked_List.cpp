#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *head = NULL;
void insert(int value)
{
    Node *newNode = new Node(value);

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
Node *removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;
    Node *toDelete;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

int main()
{
    insert(10);
    insert(20);
    insert(20);
    insert(40);
    insert(50);
    insert(60);
    display();
    head = removeDuplicates(head);
    cout << "\n";
    display();
}
