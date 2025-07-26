#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        int minimum = nums[0];
        for (auto num : nums)
        {
            if (abs(num) < abs(minimum))
            {
                minimum = num;
            }
            else if (abs(num) == abs(minimum) && num > minimum)
            {
                minimum = num;
            }
        }
        return minimum;
    }
};

int main()
{
    Solution obj;
    vector<int> haystack = {-4, -2, 1, 4, 8};
    printf("%d", obj.findClosestNumber(haystack));
}
