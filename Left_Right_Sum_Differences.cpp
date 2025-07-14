#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> leftsum(n, 0);
        vector<int> rightsum(n);
        int i = 1;
        int j = n - 2;
        rightsum[n - 1] = 0;
        while (i < n && j >= 0)
        {
            leftsum[i] = nums[i - 1] + leftsum[i - 1];
            rightsum[j] = nums[j + 1] + rightsum[j + 1];
            i++;
            j--;
        }
        vector<int> answer;
        for (int i = 0; i < n; i++)
        {
            answer.push_back(abs(leftsum[i] - rightsum[i]));
        }
        return answer;
    }
};

int main()
{
    vector<int> nums = {10, 4, 8, 3};
    Solution obj;
    vector<int> arr = obj.leftRightDifference(nums);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
