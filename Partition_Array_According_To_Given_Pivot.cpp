#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        int countless = 0;
        int equal = 0;
        for (auto it : nums)
        {
            if (it < pivot)
            {
                countless++;
            }
            else if (it == pivot)
            {
                equal++;
            }
        }
        int i = 0;
        int j = countless;
        int k = j + equal;
        vector<int> arr(nums.size());
        for (auto it : nums)
        {
            if (it < pivot)
            {
                arr[i++] = it;
            }
            else if (it == pivot)
            {
                arr[j++] = it;
            }
            else
            {
                arr[k++] = it;
            }
        }
        return arr;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    vector<int> arr = obj.pivotArray(nums, 10);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
