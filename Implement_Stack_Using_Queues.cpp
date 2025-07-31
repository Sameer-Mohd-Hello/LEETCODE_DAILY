#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        int n = q.size();
        q.push(x);
        for (int i = 0; i < n; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int temp = q.front();
        q.pop();
        return temp;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.size() == 0;
    }
};

int main()
{
    MyStack obj;
    cout << boolalpha;
    cout << "Stack is empty -> " << obj.empty() << endl;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.push(60);

    cout << "Element poped -> " << obj.pop() << endl;
    cout << "Element poped -> " << obj.pop() << endl;
    cout << "the top of stack is -> " << obj.top() << endl;
    cout << "Stack is empty -> " << obj.empty();

    return 0;
}
