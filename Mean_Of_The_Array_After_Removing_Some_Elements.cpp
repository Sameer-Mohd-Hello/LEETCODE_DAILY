#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int k = arr.size();
        int m = k / 20;
        double sum = 0;
        for (int i = m; i < arr.size() - m; i++)
        {
            sum += arr[i];
        }
        return sum / (k - (2 * m));
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {6, 0, 7, 0, 7, 5, 7, 8, 3, 4, 0, 7, 8, 1, 6, 8, 1, 1, 2, 4, 8, 1, 9, 5, 4, 3, 8, 5, 10, 8, 6, 6, 1, 0, 6, 10, 8, 2, 3, 4};
    double k = obj.trimMean(nums);
    cout << k;
}
