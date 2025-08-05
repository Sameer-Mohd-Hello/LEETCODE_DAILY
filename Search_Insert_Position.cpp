#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> nums, int target)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }

    int searchInsert1(vector<int> nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            else if (nums[i] > target)
            {
                return i;
            }
        }
        return nums.size();
    }
};

int main()
{
    Solution solution;
    int result = solution.searchInsert({1, 3, 5, 6}, 5);
    int res = solution.searchInsert1({1, 3, 5, 6}, 2);
    cout << "the Insert position -> " << result << endl;
    cout << "the Insert position -> " << res << endl;
    return 0;
}
