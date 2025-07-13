#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;
        while (i < j)
        {
            while (i < j && !isalnum(s[i]))
                i++;
            while (i < j && !isalnum(s[j]))
                j--;
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};
class Solution1
{
public:
    bool isPalindrome(string s)
    {
        string p = "";
        for (auto it : s)
        {
            if (isalnum(it))
            {
                p += tolower(it);
            }
        }
        string d = p;
        reverse(p.begin(), p.end());
        return d == p;
    }
};

int main()
{
    Solution obj;
    bool nums = obj.isPalindrome("A man, a plan, a canal: Panama");
    cout << nums;
}
