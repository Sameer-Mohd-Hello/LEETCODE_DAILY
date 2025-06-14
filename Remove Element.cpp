#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (val != nums[i])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
int main()
{
    vector<int> arr{3, 2, 2, 3};
    Solution obj;
    int k = obj.removeElement(arr, 3);
    cout << k;
    return 0;
}
