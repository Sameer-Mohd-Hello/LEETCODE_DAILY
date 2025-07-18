#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numberOfPoints(vector<vector<int>> &nums)
    {
        int arr[102] = {0};
        int start = 0;
        int end = 0;
        for (auto &car : nums)
        {
            start = car[0];
            end = car[1];
            arr[start] += 1;
            arr[end + 1] -= 1;
        }
        int cars = 0, count = 0;
        for (int i = 0; i < 101; i++)
        {
            cars += arr[i];
            if (cars > 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    vector<vector<int>> s = {{3, 6}, {1, 5}, {4, 7}};
    Solution obj;
    int a = obj.numberOfPoints(s);
    cout << "Points that intersect  with car are : ";
    cout << a;
}
