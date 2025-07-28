#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if (!st.empty())
                {
                    char top = st.top();
                    if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution obj;
    cout << boolalpha;
    cout << "Valid parinthesis : " << obj.isValid("([{}])") << endl;
    cout << "Valid parinthesis : " << obj.isValid("({)}") << endl;
    return 0;
}
