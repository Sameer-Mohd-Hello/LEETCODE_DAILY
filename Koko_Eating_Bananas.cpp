#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long countHour(vector<int> &nums, int cap)
    {
        long long hour = 0;
        for (auto it : nums)
        {
            hour += it / cap;
            if (it % cap != 0)
                hour++;
        }
        return hour;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        long long left = 1;
        long long right = INT_MIN;
        for (auto it : piles)
        {
            if (it > right)
                right = it;
        }
        long long ans = right;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long res = countHour(piles, mid);
            if (res <= h)
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    int hour = 8;
    vector<int> vec = {5, 11, 23, 4, 20, 10};
    int res = obj.minEatingSpeed(vec, hour);
    cout << "koko can eat bnanas at rate of-> " << res;
    return 0;
}
