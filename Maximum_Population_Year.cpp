#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maximumPopulation(vector<vector<int>> &logs)
    {
        int arr[101] = {0};
        for (auto &it : logs)
        {
            arr[it[0] - 1950] += 1;
            arr[it[1] - 1950] -= 1;
        }
        int maxpop = 0, curr = 0, maxy = 1950;
        for (int i = 0; i < 101; i++)
        {
            curr += arr[i];
            if (curr > maxpop)
            {
                maxpop = curr;
                maxy = i + 1950;
            }
        }
        return maxy;
    }
};

int main()
{
    vector<vector<int>> s = {{1993, 1999}, {2000, 2010}};
    Solution obj;
    int a = obj.maximumPopulation(s);
    cout << "The maximum population year is  : ";
    cout << a;
}
