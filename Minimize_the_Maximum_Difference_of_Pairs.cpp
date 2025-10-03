#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isValid(vector<int> &nums, int mid, int p)
    {
        int i = 0, pair = 0;
        while (i < nums.size() - 1)
        {
            int temp = nums[i + 1] - nums[i];
            if (temp <= mid)
            {
                pair++;
                i += 2;
            }
            else
                i++;
        }
        return pair >= p;
    }
    int minimizeMax(vector<int> &nums, int p)
    {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.back() - nums[0];
        int ans = right;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (isValid(nums, mid, p))
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {10, 1, 2, 7, 1, 3};
    int qty = 2;
    int res = obj.minimizeMax(nums, qty);
    cout << "minimum difference bw pairs is -> " << res << endl;

    return 0;
}
