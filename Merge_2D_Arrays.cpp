#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        int i = 0;
        int j = 0;
        vector<vector<int>> result;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i][0] == nums2[j][0])
            {
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            }
            else if (nums1[i][0] < nums2[j][0])
            {
                result.push_back(nums1[i++]);
            }
            else
            {
                result.push_back(nums2[j++]);
            }
        }
        while (i < nums1.size())
        {
            result.push_back(nums1[i++]);
        }
        while (j < nums2.size())
        {
            result.push_back(nums2[j++]);
        }
        return result;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>> nums1 = {{1, 2}, {3, 4}, {5, 6}};
    ;
    vector<vector<int>> nums2 = {{1, 3}, {2, 4}, {5, 7}};
    ;
    vector<vector<int>> result = obj.mergeArrays(nums1, nums2);
    for (auto &it : result)
    {
        cout << "[" << it[0] << ", " << it[1] << "] " << endl;
    }
}
