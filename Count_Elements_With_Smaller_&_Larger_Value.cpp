#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int cnt = 0;
        int right = INT_MIN;
        int left = INT_MAX;
        for (int num : nums)
        {
            left = min(num, left);
            right = max(num, right);
        }
        for (int num : nums)
        {
            if (num > left && num < right)
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution obj;
    vector<int> brr = {3, 2, 5, 4, 1, 6, 8};
    int arr = obj.countElements(brr);
    cout << arr;
}
