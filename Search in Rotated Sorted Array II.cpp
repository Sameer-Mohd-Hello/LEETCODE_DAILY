#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int temp = nums[mid];
            if (temp == target)
                return true;

            if (nums[left] == temp)
            {
                left++;
                continue;
            }

            if (nums[left] < temp)
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
        return false;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {4, 5, 6, 7, 0, 0, 1, 2};
    int target = 0;
    cout << boolalpha << endl;
    bool res = obj.search(nums, target);
    cout << "The target element is present in array -> " << res << endl;
    return 0;
}
