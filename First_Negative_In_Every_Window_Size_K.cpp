#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        // write code here
        vector<int> num;
        int n = arr.size();
        for (int i = 0; i <= n - k; i++)
        {
            bool flag = false;
            for (int j = i; j < i + k; j++)
            {
                if (arr[j] < 0)
                {
                    num.push_back(arr[j]);
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                num.push_back(0);
            }
        }
        return num;
    }
};

int main()
{
    vector<int> s = {-8, 2, 3, -6, 10};
    Solution obj;
    vector<int> a = obj.firstNegInt(s, 2);
    cout << "first negative in window size k are : ";
    for (auto it : a)
    {
        cout << it << " ";
    }
}
