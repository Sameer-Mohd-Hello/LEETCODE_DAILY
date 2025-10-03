#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int temp = nums[mid];
            if (temp == target)
                return mid;

            if (nums[left] <= temp)
            {
                if (nums[left] <= target && target < temp)
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            else
            {
                if (temp < target && target <= nums[right])
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int res = obj.search(nums, target);
    cout << "The target element is present at index -> " << res << endl;
    return 0;
}
