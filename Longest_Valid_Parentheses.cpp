#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st;
        st.push(-1);
        int maxcount = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if (st.empty())
                {
                    st.push(i);
                }
                else
                {
                    maxcount = max(maxcount, i - st.top());
                }
            }
        }
        return maxcount;
    }
};

int main()
{
    Solution obj;
    cout << "Longest valid parenthesis : " << obj.longestValidParentheses("(()())") << endl;
    cout << "Longest valid parenthesis : " << obj.longestValidParentheses("(((") << endl;
    return 0;
}
