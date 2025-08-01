#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        queue<int> game;

        for (int i = 0; i < n; i++)
        {
            game.push(i + 1);
        }

        while (game.size() > 1)
        {
            for (int i = 0; i < k - 1; i++)
            {
                game.push(game.front());
                game.pop();
            }
            game.pop();
        }
        return game.front();
    }
};

int main()
{
    Solution obj;
    cout << "The winner will be -> " << obj.findTheWinner(6, 10);
    return 0;
}
