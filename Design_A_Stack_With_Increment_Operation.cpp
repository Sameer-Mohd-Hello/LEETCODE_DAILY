#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

class CustomStack
{
public:
    int maxsize = 0;

    CustomStack(int maxSize)
    {
        maxsize = maxSize;
    }

    void push(int x)
    {
        if (arr.size() < maxsize)
        {
            arr.push_back(x);
        }
    }

    int pop()
    {
        if (arr.empty())
        {
            return -1;
        }

        int back = arr.back();
        arr.pop_back();
        return back;
    }

    void increment(int k, int val)
    {
        for (int i = 0; i < k && i < arr.size(); i++)
        {
            arr[i] += val;
        }
    }
};

int main()
{
    CustomStack obj(5);
    obj.push(10);
    obj.push(5);
    obj.push(30);
    obj.push(40);
    obj.push(20);
    obj.push(1);
    cout << "stack is : ";
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "element poped is : " << obj.pop() << endl;
    cout << "element poped is : " << obj.pop() << endl;

    cout << "stack after poping is : ";
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    obj.increment(3, 6);

    cout << "stack after increment is : ";
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
