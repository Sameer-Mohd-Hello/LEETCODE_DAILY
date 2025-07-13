#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        int k = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
                swap(nums[j], nums[k++]);
        }
        return nums;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    vector<int> arr = obj.applyOperations(nums);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
