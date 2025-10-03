#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int s = 0, e = nums.size() - 1;
        while (s < e)
        {
            int mid = s + (e - s) / 2;
            if (nums[mid] > nums[mid + 1])
                e = mid;
            else
                s = mid + 1;
        }
        return s;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    int res = obj.findPeakElement(nums);
    cout << "The peak element of the array is present at index-> " << res << endl;
    return 0;
}
