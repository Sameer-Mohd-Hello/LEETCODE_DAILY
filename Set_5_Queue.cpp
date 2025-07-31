#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

void push(queue<int> &q, int x)
{
    q.push(x);
}

int Pop(queue<int> &q)
{

    if (!q.empty())
    {
        int temp = q.front();
        q.pop();
        return temp;
    }
    return -1;
}

/*returns the size of the queue q */

int getSize(queue<int> &q)
{

    return q.size();
}

/*returns the last element of the queue */
int getBack(queue<int> &q)
{
    if (!q.empty())
        return q.back();
    return -1;
}

/*returns the first element of the queue */
int getFront(queue<int> &q)
{
    if (!q.empty())
        return q.front();
    return -1;
}

int main()
{
    push(q, 10);
    push(q, 20);
    push(q, 30);
    push(q, 40);
    push(q, 50);
    push(q, 60);
    push(q, 70);
    cout << "Element poped -> " << Pop(q) << endl;
    cout << "Que size is -> " << getSize(q) << endl;
    cout << "Que front is -> " << getFront(q) << endl;
    cout << "Que back is -> " << getBack(q) << endl;
    return 0;
}
