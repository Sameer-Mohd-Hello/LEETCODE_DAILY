#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        long long sum = 0, maxsum = 0;
        int n = nums.size();
        unordered_set<int> num;
        int i = 0, j = 0;
        while (j < n)
        {
            while (num.count(nums[j]))
            {
                sum -= nums[i];
                num.erase(nums[i++]);
            }
            sum += nums[j];
            num.insert(nums[j]);
            if (j - i + 1 == k)
            {
                maxsum = max(maxsum, sum);
                sum -= nums[i];
                num.erase(nums[i++]);
            }
            j++;
        }
        return maxsum;
    }
};

int main()
{
    vector<int> s = {1, 5, 4, 2, 9, 9, 9};
    Solution obj;
    int a = obj.maximumSubarraySum(s, 3);
    cout << "Maxsum is : " << a;
}
