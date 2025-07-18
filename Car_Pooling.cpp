#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        int arr[1001] = {0};
        int start = 0;
        int end = 0;
        int val = 0;
        for (auto &car : trips)
        {
            start = car[1];
            end = car[2];
            val = car[0];
            arr[start] += val;
            arr[end] -= val;
        }
        int count = 0;
        for (int i = 0; i < 1001; i++)
        {
            count += arr[i];
            if (count > capacity)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    vector<vector<int>> s = {{2, 1, 5}, {3, 3, 7}};
    Solution obj;
    bool a = obj.carPooling(s, 4);
    cout << "Car pooling : ";
    cout << boolalpha << a;
}
