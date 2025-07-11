#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        while (i < j)
        {
            if (nums[i] & 1 != 0)
            {
                swap(nums[i], nums[j--]);
            }
            else
            {
                i++;
            }
        }
        return nums;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {4, 3, 2, 1, 6, 5};
    vector<int> arr = obj.sortArrayByParity(nums);
    for (auto &it : arr)
    {
        cout << it << " ";
    }
}
