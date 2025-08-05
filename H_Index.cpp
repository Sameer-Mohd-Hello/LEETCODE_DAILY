#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int target;

int guess(int num)
{
    if (num == target)
        return 0;
    else if (num < target)
        return 1;
    else
        return -1;
}

class Solution
{
public:
    int hIndex(vector<int> citations)
    {
        sort(rbegin(citations), rend(citations));

        int idx = 0;
        int n = citations.size();

        while (idx < n && citations[idx] > idx)
            idx++;
        return idx;
    }
};

int main()
{
    Solution solution;
    int result = solution.hIndex({3, 0, 6, 1, 5});
    cout << "maximum citations are : " << result << endl;
    return 0;
}
