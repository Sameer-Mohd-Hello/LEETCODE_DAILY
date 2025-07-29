#include <iostream>
#include <unordered_map>
#include <stack>

using namespace std;

class FreqStack
{
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> freqMap;
    int maxfreq = 0;

    FreqStack()
    {
    }

    void push(int val)
    {
        freq[val]++;

        int f = freq[val];
        freqMap[f].push(val);

        if (f > maxfreq)
        {
            maxfreq = f;
        }
    }

    int pop()
    {
        int val = freqMap[maxfreq].top();
        freqMap[maxfreq].pop();

        freq[val]--;

        if (freqMap[maxfreq].empty())
        {
            maxfreq--;
        }
        return val;
    }
};

int main()
{
    FreqStack obj;
    obj.push(10);
    obj.push(5);
    obj.push(30);
    obj.push(40);
    obj.push(20);
    obj.push(1);
    cout << "the max freq element is : " << obj.pop() << endl;
    cout << "the max freq element is : " << obj.pop();
    return 0;
}
