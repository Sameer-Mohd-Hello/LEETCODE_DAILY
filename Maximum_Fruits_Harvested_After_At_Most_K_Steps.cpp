#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int maxTotalFruits(vector<vector<int>> &fruits, int startPos, int k)
    {
        int n = fruits.size();
        int ans = 0, sum = 0;
        int left = 0;

        for (int right = 0; right < n; ++right)
        {
            sum += fruits[right][1];

            while (left <= right &&
                   min(abs(startPos - fruits[left][0]) + (fruits[right][0] - fruits[left][0]),
                       abs(startPos - fruits[right][0]) + (fruits[right][0] - fruits[left][0])) > k)
            {
                sum -= fruits[left][1];
                left++;
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> s = {{2, 8}, {6, 3}, {8, 6}};
    Solution obj;
    int a = obj.maxTotalFruits(s, 5, 4);
    cout << "Maxsum number of fruits that can be collected are : " << a;
}
