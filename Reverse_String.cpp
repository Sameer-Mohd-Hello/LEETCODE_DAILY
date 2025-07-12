#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            swap(s[i++], s[j--]);
        }
    }
};
int main()
{
    Solution obj;
    vector<char> nums = {'H', 'a', 'n', 'n', 'a', 'h'};
    obj.reverseString(nums);
    for (const char &it : nums)
    {
        cout << it;
    }
}
