#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int temp = s2.top();
        s2.pop();
        return temp;
    }

    int peek()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

int main()
{
    MyQueue obj;
    cout << boolalpha;
    cout << "Queue is empty -> " << obj.empty() << endl;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.push(60);

    cout << "Element poped -> " << obj.pop() << endl;
    cout << "Element poped -> " << obj.pop() << endl;
    cout << "the top of Queue is -> " << obj.peek() << endl;
    cout << "Queue is empty -> " << obj.empty();

    return 0;
}
