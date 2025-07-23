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
    Node *getMiddle(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node *reverse(Node *mid)
    {
        Node *l = NULL;
        Node *c = mid;
        Node *r = NULL;
        while (c != NULL)
        {
            r = c->next;
            c->next = l;
            l = c;
            c = r;
        }
        return l;
    }
    bool isPalindrome(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return true;
        Node *temp = getMiddle(head);
        temp->next = reverse(temp->next);
        temp = temp->next;
        while (temp != NULL)
        {
            if (head->data != temp->data)
                return false;

            head = head->next;
            temp = temp->next;
        }

        return true;
    }
};

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(30);
    insert(20);
    insert(10);
    display();
    cout << endl;
    Solution obj;
    cout << "the list is palindrome : " << (obj.isPalindrome(head) ? "true" : "false");
    ;
}
