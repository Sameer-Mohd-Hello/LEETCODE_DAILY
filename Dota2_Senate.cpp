#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        int n = senate.length();
        queue<int> radient, dire;

        for (int i = 0; i < n; i++)
        {
            if (senate[i] == 'R')
            {
                radient.push(i);
            }
            else
            {
                dire.push(i);
            }
        }

        while (!radient.empty() && !dire.empty())
        {
            int r_idx = radient.front();
            radient.pop();

            int d_idx = dire.front();
            dire.pop();

            if (r_idx < d_idx)
            {
                radient.push(r_idx + n);
            }
            else
            {
                dire.push(d_idx + n);
            }
        }
        return dire.empty() ? "Radiant" : "Dire";
    }
};

int main()
{
    Solution obj;
    cout << "The winner will be -> " << obj.predictPartyVictory("RRDRDDR");
    return 0;
}
