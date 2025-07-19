#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int longestk(vector<int> &nums, int k)
    {
        int i = 0, sum = 0, len = 0, n = nums.size();

        for (int j = 0; j < n; j++)
        {
            sum += nums[j];

            while (sum > k && i <= j)
            {
                sum -= nums[i++];
            }

            len = max(len, j - i + 1);
        }
        return len;
    }
};

int main()
{
    vector<int> s = {1, 2, 1, 0, 1, 1, 0};
    Solution obj;
    int a = obj.longestk(s, 4);
    cout << "Maximum lenght of window is : " << a;
}
