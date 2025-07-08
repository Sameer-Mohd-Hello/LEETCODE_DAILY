#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(), special.end());
        int maxgap = 0;

        maxgap=special[maxgap] - bottom;

        for(int i = 1; i<special.size(); i++){
            maxgap=max(maxgap, special[i]-special[i-1]-1);
        }
        maxgap=max(maxgap, top-special.back());
        return maxgap;
    }
};


int main()
{
    Solution obj;
    vector<int> brr = {3, 2, 5, 4, 1, 6, 8};
    int arr = obj.maxConsecutive(0, 12, brr);
    cout << arr;
}
