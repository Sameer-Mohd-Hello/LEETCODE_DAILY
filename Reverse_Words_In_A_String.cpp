#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.size();
        reverse(s.begin(), s.end());
        int i = 0;
        int r = 0;
        int l = 0;
        while (i < n)
        {
            while (i < n && s[i] != ' ')
            {
                s[r++] = s[i++];
            }
            if (l < r)
            {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        return s.substr(0, r - 1);
    }
};

int main()
{
    Solution obj;
    string nums = obj.reverseWords("the sky is blue");
    cout << nums;
}
