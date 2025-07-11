#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        int k = nums.size();
        while (i < k && j < k)
        {
            if (nums[i] % 2 != 0)
            {
                swap(nums[i], nums[j]);
                j += 2;
            }
            else
            {
                i += 2;
            }
        }
        return nums;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {4, 3, 2, 1, 6, 5};
    vector<int> arr = obj.sortArrayByParityII(nums);
    for (auto &it : arr)
    {
        cout << it << " ";
    }
}
