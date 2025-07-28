#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int count = 0;
        int maxcount = 0;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(')
            {
                count++;
            }
            else if (ch == ')')
            {
                maxcount = max(maxcount, count);
                count--;
            }
        }
        return maxcount;
    }
};

int main()
{
    Solution obj;
    cout << "Maximum nasting depth : " << obj.maxDepth("(1+(2*3)+((8)/4))+1") << endl;
    cout << "Maximum nasting depth : " << obj.maxDepth("1+2*5") << endl;
    return 0;
}
