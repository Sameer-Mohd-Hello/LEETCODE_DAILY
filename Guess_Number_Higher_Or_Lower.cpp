#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int target;

int guess(int num)
{
    if (num == target)
        return 0;
    else if (num < target)
        return 1;
    else
        return -1;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        int low = 1, high = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int pick = guess(mid);

            if (pick == 0)
                return mid;
            else if (pick == -1)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return 0;
    }
};

int main()
{
    Solution solution;
    srand(time(0));
    target = rand() % 100 + 1;
    int result = solution.guessNumber(100);
    cout << result << endl;
    return 0;
}
