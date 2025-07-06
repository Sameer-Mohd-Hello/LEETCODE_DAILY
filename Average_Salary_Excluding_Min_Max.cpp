#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    double average(vector<int> &salary)
    {
        sort(salary.begin(), salary.end());
        int s = salary.size() - 2;
        double sum = 0;
        for (int i = 1; i <= s; i++)
        {
            sum += salary[i];
        }
        double avg = sum / s;
        return avg;
    }
};

int main()
{
    Solution obj;
    vector<int> brr = {5000, 4000, 3000, 2000, 1000};
    double arr = obj.average(brr);
    cout << arr;
}
