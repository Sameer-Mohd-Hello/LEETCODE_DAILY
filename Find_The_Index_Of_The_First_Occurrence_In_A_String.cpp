#include <stdio.h>
#include <string>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        auto s = haystack.find(needle);
        if (s != string::npos)
        {
            return s;
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    string haystack = "mdsameerali";
    string needle = "sam";
    printf("%d", obj.strStr(haystack, needle));
}
