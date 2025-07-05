#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else
            {
                nums1[k--] = nums2[j--];
            }
        }
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};
int main()
{
    vector<int> nums1 = {1, 3, 5, 7, 9, 0, 0, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6, 8, 10};
    int m = 5;
    int n = 5;
    Solution obj;
    obj.merge(nums1, m, nums2, n);
    cout << "the elements of nums1 is : ";
    for (int m : nums1)
    {
        cout << m << " ";
    }
}
