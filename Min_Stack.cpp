#include <iostream>
#include <vector>
using namespace std;

class MinStack
{
public:
    vector<vector<int>> st;

    MinStack()
    {
    }

    void push(int val)
    {
        int min = getMin();
        if (st.empty() || min > val)
        {
            min = val;
        }
        st.push_back({val, min});
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        return st.back()[0];
    }

    int getMin()
    {
        return (st.empty()) ? -1 : st.back()[1];
    }
};

int main()
{
    MinStack obj;
    obj.push(10);
    obj.push(5);
    obj.push(30);
    obj.push(40);
    obj.push(20);
    obj.push(1);
    obj.pop();
    cout << "the top of stack is : " << obj.top() << endl;
    cout << "the min of stack is : " << obj.getMin();
    return 0;
}
