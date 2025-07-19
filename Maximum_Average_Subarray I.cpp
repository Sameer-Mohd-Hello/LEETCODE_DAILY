#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0, maxsum = 0;
        int n = nums.size();
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        maxsum = sum;
        for (int i = k; i < n; i++)
        {
            sum += nums[i] - nums[i - k];
            maxsum = max(maxsum, sum);
        }
        return (double)maxsum / k;
    }
};

int main()
{
    vector<int> s = {1, 12, -5, -6, 50, 3};
    Solution obj;
    double a = obj.findMaxAverage(s, 4);
    cout << "Maximum average of size k window is : " << a;
}
