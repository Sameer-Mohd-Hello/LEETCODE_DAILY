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
/**
 * Definition for singly-linked list.
 * struct Node {
 *     int val;
 *     Node *next;
 *     Node() : val(0), next(nullptr) {}
 *     Node(int x) : val(x), next(nullptr) {}
 *     Node(int x, Node *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    Node *middleNode(Node *head)
    {
        Node *s = head;
        Node *f = head;

        while (f != NULL && f->next != NULL)
        {
            s = s->next;
            f = f->next->next;
        }
        return s;
    }
};

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    display();
    cout << endl;
    Solution obj;
    Node *temp = obj.middleNode(head);
    cout << "Middle is : " << temp->data;
}
