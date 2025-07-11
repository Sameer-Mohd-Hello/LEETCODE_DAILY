#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        vector<int> result(nums.size());

        for (auto it : nums)
        {
            if (it >= 0)
            {
                result[i] = it;
                i += 2;
            }
            else
            {
                result[j] = it;
                j += 2;
            }
        }

        return result;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> arr = obj.rearrangeArray(nums);
    for (auto &it : arr)
    {
        cout << it << " ";
    }
}
