#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int Binary(vector<int> &nums, int left, int right, int target)
    {
        if (left > right)
            return -1;

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
        {
            right = mid - 1;
            return Binary(nums, left, right, target);
        }
        else
        {
            left = mid + 1;
            return Binary(nums, left, right, target);
        }
    }

    int search(vector<int> &nums, int target)
    {
        return Binary(nums, 0, nums.size() - 1, target);
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int result = solution.search(nums, target);
    cout << result << endl;
    return 0;
}
