#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 1 || x == 0)
            return x;
        int res;
        int left = 2;
        int right = x / 2;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long sqr = mid * mid;
            if (sqr == x)
                return mid;
            else if (sqr < x)
            {
                left = mid + 1;
                res = mid;
            }
            else
                right = mid - 1;
        }
        return res;
    }
};

int main()
{
    Solution obj;
    int var = 39;
    int res = obj.mySqrt(var);
    cout << "the nearest square root of " << var << " is -> " << res;
    return 0;
}
