#include <iostream>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue
{
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() { front = rear = NULL; }
};

// Function to push an element into the queue.
void MyQueue::push(int x)
{
    QueueNode *newNode = new QueueNode(x);
    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

// Function to pop front element from the queue.
int MyQueue ::pop()
{
    if (front == NULL)
        return -1;
    QueueNode *temp = front;
    int a = temp->data;
    front = front->next;
    delete temp;
    if (front == NULL)
        rear = NULL;
    return a;
}

int main()
{
    MyQueue obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.push(60);

    cout << "Element poped -> " << obj.pop() << endl;
    cout << "Element poped -> " << obj.pop() << endl;

    return 0;
}
