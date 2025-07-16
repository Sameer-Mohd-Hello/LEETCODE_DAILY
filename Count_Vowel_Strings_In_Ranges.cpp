#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isvowel(char ch)
    {
        char cha = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        int n = words.size();
        int m = queries.size();
        vector<int> res(n);
        vector<int> result(m);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (isvowel(words[i][0]) && isvowel(words[i].back()))
            {
                sum++;
            }
            res[i] = sum;
        }

        for (int i = 0; i < m; i++)
        {
            int l = queries[i][1];
            int r = queries[i][0];
            if (r == 0)
                result[i] = res[l];
            else
                result[i] = res[l] - (res[r - 1]);
        }

        return result;
    }
};

int main()
{
    vector<string> sum = {"aba", "bcb", "ece", "aa", "e"};
    vector<vector<int>> nums = {{0, 2}, {1, 4}, {1, 1}};
    Solution obj;
    vector<int> arr = obj.vowelStrings(sum, nums);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
