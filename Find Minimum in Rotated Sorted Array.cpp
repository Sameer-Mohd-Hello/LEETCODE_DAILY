#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size() - 1;
        int left = 0;
        int right = n;
        int ans = nums[0];
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= nums[right])
            {
                ans = min(ans, nums[mid]);
                right = mid - 1;
            }
            else
            {
                ans = min(ans, nums[mid]);
                left = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int res = obj.findMin(nums);
    cout << "The minimum element is -> " << res << endl;
    return 0;
}
