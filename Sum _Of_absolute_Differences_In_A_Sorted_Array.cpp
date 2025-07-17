#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        vector<int> left(n, 0);
        vector<int> right(n, 0);

        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] + nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1] + nums[i + 1];
        }

        for (int i = 0; i < n; i++)
        {
            int sum = abs(nums[i] * i - left[i]);
            sum += abs(right[i] - nums[i] * (n - i - 1));
            ans.push_back(sum);
        }
        return ans;
    }
};

int main()
{
    vector<int> s = {1, 4, 6, 8, 10};
    Solution obj;
    vector<int> arr = obj.getSumAbsoluteDifferences(s);
    cout << "The absolute difference are : ";
    for (auto it : arr)
    {
        cout << it << ", ";
    }
}
