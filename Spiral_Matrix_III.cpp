#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart)
    {
        int total = rows * cols;
        vector<vector<int>> res;
        res.reserve(total);

        int i = rStart, j = cStart;
        int len = 1;

        static const int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        res.push_back({i, j});

        while (res.size() < total)
        {
            for (int d = 0; d < 4; ++d)
            {
                for (int k = 0; k < len; ++k)
                {
                    i += dir[d][0];
                    j += dir[d][1];
                    if (i >= 0 && i < rows && j >= 0 && j < cols)
                        res.push_back({i, j});
                    if (res.size() == total)
                        return res;
                }
                if (d % 2 == 1)
                    ++len;
            }
        }
        return res;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> arr;
    arr = obj.spiralMatrixIII(5, 6, 1, 4);
    int col = arr.size();
    int row = arr[0].size();
    for (int i = 0; i < col; i++)
    {
        for (int m = 0; m < row; m++)
        {
            cout << "[" << arr[i][m] << "]";
        }
        cout << endl;
    }
}
