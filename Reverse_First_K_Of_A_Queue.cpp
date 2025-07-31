#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution
{
public:
    void reverseFirstK(queue<int> &q, int k)
    {

        // step 1:
        int m = q.size();
        if (m < k)
            return;

        // step 2:
        stack<int> st;
        for (int i = 0; i < k; i++)
        {
            st.push(q.front());
            q.pop();
        }

        // step 3:
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }

        // step 4:
        int rem = m - k;
        for (int i = 0; i < rem; i++)
        {
            q.push(q.front());
            q.pop();
        }
        return;
    }
    void display(queue<int> q)
    {
        cout << "The queue is : " << endl;
        while (!q.empty())
        {
            cout << q.front() << " -> ";
            q.pop();
        }
        cout << endl;
    }
};

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    Solution obj;
    obj.display(q);
    obj.reverseFirstK(q, 4);
    obj.display(q);

    return 0;
}
