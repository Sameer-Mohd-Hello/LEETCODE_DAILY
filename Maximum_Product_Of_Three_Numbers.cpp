#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int maximum = 1;
        int maximum1 = 1;
        int s = nums.size() - 1;
        sort(nums.begin(), nums.end());
        maximum = nums[s] * nums[s - 1] * nums[s - 2];
        maximum1 = nums[s] * nums[1] * nums[0];
        return max(maximum, maximum1);
    }
};
int main()
{
    Solution obj;
    vector<int> arr = {1, 4, 5, 3, -4, -8, 11};
    int product = obj.maximumProduct(arr);
    cout << product;
}
