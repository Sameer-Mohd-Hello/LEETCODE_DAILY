#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    double Count(vector<int> &nums, int speed)
    {
        double dis = 0;
        int n = nums.size() - 1;
        for (int i = 0; i < n; i++)
        {
            dis += (nums[i] + speed - 1) / speed;
        }
        dis += (double)nums[n] / speed;
        return dis;
    }

    int minSpeedOnTime(vector<int> &dist, double hour)
    {
        int left = 1;
        int right = pow(10, 7);
        int ans = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            cout << "mid->" << mid << endl;
            double temp = Count(dist, mid);
            if (temp <= hour)
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
    vector<int> nums = {1, 1, 100000};
    double qty = 2.01;
    int res = obj.minSpeedOnTime(nums, qty);
    cout << "minimum speed to arrive on time is (" << res << " )" << res << endl;

    return 0;
}
