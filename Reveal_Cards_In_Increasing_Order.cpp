#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int> deck)
    {

        int n = deck.size();
        queue<int> q;
        vector<int> res(n);

        for (int i = 0; i < n; i++)
        {
            q.push(i);
        }
        sort(begin(deck), end(deck));

        for (int i = 0; i < n; i++)
        {
            int idx = q.front();
            q.pop();
            res[idx] = deck[i];

            if (!q.empty())
            {
                q.push(q.front());
                q.pop();
            }
        }
        return res;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = obj.deckRevealedIncreasing({17, 13, 11, 2, 3, 5, 7});
    cout << "The order of reveal is -> ";
    for (auto val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
