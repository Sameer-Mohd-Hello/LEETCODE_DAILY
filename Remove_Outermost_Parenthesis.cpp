#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string st = "";
        stack<char> d;

        for (auto ch : s)
        {
            if (ch == '(')
            {
                if (!d.empty())
                    st += ch;
                d.push(ch);
            }
            else if (ch == ')')
            {
                d.pop();
                if (!d.empty())
                {
                    st += ch;
                }
            }
        }
        return st;
    }
};

int main()
{
    Solution obj;
    cout << "Outter most parenthesis removed : " << obj.removeOuterParentheses("(()())") << endl;
    cout << "Outter most parenthesis removed : " << obj.removeOuterParentheses("()()") << endl;
    return 0;
}
