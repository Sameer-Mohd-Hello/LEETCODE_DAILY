#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int Count(vector<int> &nums, int day, int flowers)
    {
        int count = 0, make = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= day)
                count++;
            else
                count = 0;
            if (count == flowers)
            {
                make++;
                count = 0;
            }
        }
        return make;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        if ((long long)m * k > bloomDay.size())
            return -1;
        int right = *max_element(begin(bloomDay), end(bloomDay));
        int left = 1;
        int bqts = left;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int res = Count(bloomDay, mid, k);
            if (res >= m)
            {
                bqts = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return bqts;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {7, 7, 7, 7, 12, 7, 7};
    int qty = 2;
    int qual = 3;
    int res = obj.minDays(nums, qty, qual);
    cout << "the smallest divisor to given threshhold (" << res << ") is -> " << res;
    return 0;
}
