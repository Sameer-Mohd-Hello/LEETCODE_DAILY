#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end())
            {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }

        return {-1, -1};
    }
};
int main()
    {
        Solution obj;
        vector<int> arr = {2, 11, 15, 7};
        vector<int> choice= obj.twoSum(arr, 9);
        cout<<choice[0]<<" "<<choice[1];
        return 0;
    }
