#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int bestClosingTime(string customers)
    {
        int n = customers.size();
        vector<int> res(n + 1, 0);
        vector<int> res1(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            res[i + 1] = res[i] + (customers[i] == 'N');
        }
        for (int i = n - 1; i >= 0; i--)
        {
            res1[i] = res1[i + 1] + (customers[i] == 'Y');
        }
        int minpenalty = INT_MAX;
        int bst = 0;
        for (int i = 0; i <= n; i++)
        {
            int penalty = res[i] + res1[i];
            if (minpenalty > penalty)
            {
                minpenalty = penalty;
                bst = i;
            }
        }
        return bst;
    }
};

int main()
{
    string s = "YYNY";
    Solution obj;
    cout << "The best hour to close the shop is : " << obj.bestClosingTime(s);
}
