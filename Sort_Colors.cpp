#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0;
        int j = 0;
        int k = nums.size() - 1;
        while (j <= k)
        {
            int num = nums[j];
            if (num == 1)
                j++;
            else if (num == 0)
                swap(nums[j++], nums[i++]);
            else
                swap(nums[k--], nums[j]);
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    obj.sortColors(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
}
