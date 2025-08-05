#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int specialArray(vector<int> nums)
    {
        int n = nums.size();
        int left = 0, right = n;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            int count = 0;
            for (auto num : nums)
            {
                if (num >= mid)
                {
                    count++;
                }
            }
            if (count == mid)
                return mid;
            else if (count >= mid)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};

int main()
{
    Solution solution;
    int result = solution.specialArray({0, 4, 3, 0, 4});
    cout << "the array is special with x elements : " << result << endl;
    return 0;
}
