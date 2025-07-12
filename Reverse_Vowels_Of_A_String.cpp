#include <iostream>
using namespace std;

class Solution
{
public:
    bool vowel(char c)
    {
        char ch = tolower(c);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            while (i < j && !vowel(s[i]))
                i++;
            while (i < j && !vowel(s[j]))
                j--;
            swap(s[i++], s[j--]);
        }
        return s;
    }
};
int main()
{
    Solution obj;
    string nums = "helloWORLD";
    string k = obj.reverseVowels(nums);
    cout << k;
}
