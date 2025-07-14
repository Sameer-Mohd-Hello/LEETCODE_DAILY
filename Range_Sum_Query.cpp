#include <iostream>
#include <vector>
using namespace std;

class NumArray
{
public:
    vector<int> arr;
    NumArray(vector<int> &nums)
    {
        arr.push_back(nums[0]);
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            arr.push_back(nums[i] + arr[i - 1]);
        }
    }

    int sumRange(int left, int right)
    {
        if (left == 0)
            return arr[right];
        else
            return arr[right] - arr[left - 1];
    }
};

int main()
{
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray obj(nums);
    cout << " Sum from 0 to 2 : " << obj.sumRange(0, 2) << endl;
    cout << " Sum from 2 to 5 : " << obj.sumRange(2, 5) << endl;
    cout << " Sum from 0 to 5 : " << obj.sumRange(0, 5) << endl;
}
