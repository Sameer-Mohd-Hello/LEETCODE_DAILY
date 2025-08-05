#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> nums, int target)
    {
        int n = nums.size();
        int left = INT_MAX, right = INT_MIN;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                left = min(left, i);
                right = max(right, i);
                flag = true;
            }
        }

        if (!flag)
            return {-1, -1};
        return {left, right};
    }

    vector<int> searchRange1(vector<int> nums, int target)
    {
        int n = nums.size();
        int l = -1, r = -1;
        int left = 0, right = n - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                l = mid;
                right = mid - 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        left = 0;
        right = n - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                r = mid;
                left = mid + 1;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return {l, r};
    }
};

int main()
{
    Solution solution;
    vector<int> result = solution.searchRange({5, 7, 7, 8, 8, 10}, 8);
    vector<int> res = solution.searchRange1({5, 7, 7, 8, 8, 10}, 6);

    cout << "First and Last Occurrence: " << result[0] << ", " << result[1] << endl;
    cout << "First and Last Occurrence: " << res[0] << ", " << res[1] << endl;
    return 0;
}
