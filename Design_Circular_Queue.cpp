#include <iostream>
using namespace std;

class MyCircularQueue
{
public:
    int *arr;
    int front, back, Size, capacity;

    MyCircularQueue(int k)
    {
        capacity = k;
        arr = new int[capacity];
        front = back = -1;
        Size = 0;
    }

    bool enQueue(int value)
    {
        if (Size == 0)
        {
            front = back = 0;
            arr[back] = value;
            Size++;
            return true;
        }
        else if (Size == capacity)
            return false;
        back = (back + 1) % capacity;
        Size++;
        arr[back] = value;
        return true;
    }

    bool deQueue()
    {
        if (Size == 0)
            return false;

        front = (front + 1) % capacity;
        Size--;
        return true;
    }

    int Front()
    {
        if (Size == 0)
            return -1;
        return arr[front];
    }

    int Rear()
    {
        if (Size == 0)
            return -1;
        return arr[back];
    }

    bool isEmpty()
    {
        return Size == 0;
    }

    bool isFull()
    {
        return Size == capacity;
    }
};

int main()
{
    MyCircularQueue obj(4);
    cout << boolalpha;
    cout << "Enqued -> " << obj.enQueue(10) << endl;
    cout << "Enqued -> " << obj.enQueue(20) << endl;
    cout << "Enqued -> " << obj.enQueue(30) << endl;
    cout << "Enqued -> " << obj.enQueue(40) << endl;
    cout << "Enqued -> " << obj.enQueue(50) << endl;
    cout << "Enqued -> " << obj.enQueue(60) << endl;
    cout << "Dequeued ->" << obj.deQueue() << endl;
    cout << "Dequeued ->" << obj.deQueue() << endl;
    cout << "Dequeued ->" << obj.deQueue() << endl;
    cout << "the Front is -> " << obj.Front() << endl;
    cout << "the Back is -> " << obj.Rear() << endl;
    cout << "the queue is empty -> " << obj.isEmpty() << endl;
    cout << "the queue is Full -> " << obj.isFull() << endl;

    return 0;
}
