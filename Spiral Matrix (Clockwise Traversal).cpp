#include <iostream>
#include <vector>
using namespace std;
class Solution
{

public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        //vector to store the spiral elements
        vector<int> arr;

        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;
        int id = 0;
        while (top <= bottom && left <= right)
        {
            //printing from left to right
            if (id == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    arr.push_back(matrix[top][i]);
                }
                top++;
            }

            //printing from top to bottom
            if (id == 1)
            {
                for (int i = top; i <= bottom; i++)
                {
                    arr.push_back(matrix[i][right]);
                }
                right--;
            }
            if (id == 2)
            {

                //printing from right to left
                for (int i = right; i >= left; i--)
                {
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (id == 3)
            {

                //printing from bottom to top
                for (int i = bottom; i >= top; i--)
                {
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
            id = (id + 1) % 4;
        }
        return arr;
    }
};
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution obj;
    vector<int>arr1=obj.spiralOrder(arr);
    cout<<"Spiral matrix return : ";
    for(int i=0;i<arr1.size();i++){
    cout<<arr1[i]<<" ";
    }
    return 0;
}
