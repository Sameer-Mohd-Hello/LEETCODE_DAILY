#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<vector<int>> nums;
        int dif = INT_MAX;
        int k = arr.size();
        for (int i = 1; i < k; i++)
        {
            if (arr[i] - arr[i - 1] <= dif)
            {
                dif = arr[i] - arr[i - 1];
            }
        }
        for (int j = 1; j < k; j++)
        {
            if ((arr[j] - arr[j - 1]) == dif)
            {
                nums.push_back({arr[j - 1], arr[j]});
            }
        }
        return nums;
    }
};

int main()
{
    Solution obj;
    vector<int> brr = {5, 4, 3, 2, 1};
    vector<vector<int>> arr;
    arr = obj.minimumAbsDifference(brr);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int m : arr[i])
        {
            cout << m << " ";
        }
        cout << endl;
    }
}
