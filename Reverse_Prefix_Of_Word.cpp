#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int idx = word.size() - 1;
        bool flag = false;
        for (int i = 0; i <= idx; i++)
        {
            if (word[i] == ch)
            {
                idx = i;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            return word;
        }
        int i = 0;
        while (i < idx)
        {
            swap(word[i++], word[idx--]);
        }
        return word;
    }
};
int main()
{
    Solution obj;
    string nums = "xyxzxe";
    string k = obj.reversePrefix(nums, 'z');
    cout << k;
}
