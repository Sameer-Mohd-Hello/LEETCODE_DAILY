#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int cap = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right)
        {
            if (height[left] >= height[right])
            {
                cap = max(cap, height[right] * (right - left));
                right--;
            }
            else
            {
                cap = max(cap, height[left] * (right - left));
                left++;
            }
        }
        return cap;
    }
};

int main()
{
    Solution obj;
    vector<int> brr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int arr = obj.maxArea(brr);
    cout << arr;
}
