#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> goodDaysToRobBank(vector<int> &security, int time)
    {
        int n = security.size();
        vector<int> dec(n, 0);
        vector<int> inc(n, 0);
        for (int i = 1; i < n; i++)
        {
            if (security[i] <= security[i - 1])
            {
                dec[i] = dec[i - 1] + 1;
            }
            else
            {
                dec[i] = 0;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (security[i] <= security[i + 1])
            {
                inc[i] = inc[i + 1] + 1;
            }
            else
            {
                inc[i] = 0;
            }
        }
        vector<int> res;
        for (int i = time; i < n - time; i++)
        {
            if (dec[i] >= time && inc[i] >= time)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};

int main()
{
    vector<int> s = {5, 3, 3, 3, 5, 6, 2};
    Solution obj;
    vector<int> arr = obj.goodDaysToRobBank(s, 2);
    cout << "Good days to rob the bank are : ";
    for (auto it : arr)
    {
        cout << it << ", ";
    }
}
