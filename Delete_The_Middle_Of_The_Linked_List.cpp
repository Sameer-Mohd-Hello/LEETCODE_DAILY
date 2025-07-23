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
    Node *deleteMiddle()
    {
        if (head == NULL || head->next == NULL)
            return head->next;
        Node *slow = head;
        Node *fast = head;
        Node *p = NULL;
        while (fast != NULL && fast->next != NULL)
        {
            p = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        p->next = slow->next;
        delete slow;
        return head;
    }
};

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(20);
    insert(10);
    display();
    cout << endl;
    Solution obj;
    head = obj.deleteMiddle();
    cout << endl;
    display();
}
