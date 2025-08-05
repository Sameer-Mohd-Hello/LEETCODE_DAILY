#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int hIndex(vector<int> citations)
    {
        int n = citations.size();
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            int h = n - i;
            if (citations[i] >= h)
                idx++;
        }
        return idx;
    }

    int hIndex1(vector<int> citations)
    {
        int n = citations.size();
        int left = 0, right = n - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (citations[mid] >= n - mid)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return n - left;
    }
};

int main()
{
    Solution solution;
    int result = solution.hIndex({3, 0, 6, 1, 5});
    int res = solution.hIndex1({1, 2, 100});
    cout << "maximum citations are : " << result << endl;
    cout << "maximum citations are : " << res << endl;
    return 0;
}
