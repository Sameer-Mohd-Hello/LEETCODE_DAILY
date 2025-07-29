#include <iostream>
using namespace std;

class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int open = 0, req = 0;

        for (auto ch : s)
        {
            if (ch == '(')
            {
                open++;
            }
            else
            {
                if (open > 0)
                {
                    open--;
                }
                else
                {
                    req++;
                }
            }
        }
        return req + open;
    }
};

int main()
{
    Solution obj;
    cout << "Minimum parenthesis required : " << obj.minAddToMakeValid("(()())") << endl;
    cout << "Minimum parenthesis required : " << obj.minAddToMakeValid("((()") << endl;
    return 0;
}
