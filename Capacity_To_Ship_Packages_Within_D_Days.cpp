#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int CountDays(vector<int> &weights, int capacity)
    {
        int day = 1;
        int weight = 0;
        int size = weights.size();
        for (int i = 0; i < size; i++)
        {
            if (weight + weights[i] <= capacity)
            {
                weight += weights[i];
            }
            else
            {
                day++;
                weight = weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int sum = 0, high = INT_MIN;
        for (auto num : weights)
        {
            sum += num;
            if (high < num)
                high = num;
        }
        int left = high;
        int right = sum - days + 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int day = CountDays(weights, mid);
            if (day <= days)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};

int main()
{
    Solution obj;
    int days = 5;
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int res = obj.shipWithinDays(vec, days);
    cout << "the min weight for " << days << " days is -> " << res;
    return 0;
}
