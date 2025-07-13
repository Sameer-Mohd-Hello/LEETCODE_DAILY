#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findKDistantIndices(vector<int> &nums, int key, int k)
    {
        vector<int> result;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (nums[j] == key && abs(i - j) <= k)
                {
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3, 4, 9, 1, 3, 9, 5};
    vector<int> arr = obj.findKDistantIndices(nums, 9, 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
