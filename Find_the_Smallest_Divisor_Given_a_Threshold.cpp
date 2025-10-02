#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long CountDiv(vector<int> &nums, int div)
    {
        long long count = 0;
        for (auto it : nums)
        {
            count += (it + div - 1) / div;
        }
        return count;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        long long right = INT_MIN;
        int n = nums.size();
        for (auto it : nums)
        {
            if (right < it)
                right = it;
        }
        long long left = 1;
        long long res = right;
        if (n == threshold)
            return right;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long div = CountDiv(nums, mid);
            if (div <= threshold)
            {
                res = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return res;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 5, 9};
    int var = 6;
    int res = obj.smallestDivisor(nums, var);
    cout << "the smallest divisor to given threshhold (" << var << ") is -> " << res;
    return 0;
}
