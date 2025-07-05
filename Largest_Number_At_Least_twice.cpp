#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int right=nums.size();
        int mx=-1;
        int m=-1;
        int index=-1;
        for(int i=0;i<right;i++){
            if(nums[i]>mx){
                m=mx;
                mx=nums[i];
                index=i;
            }else if(nums[i]>m){
                m=nums[i];
            }
        }
        return (mx>=m*2) ? index : -1;
    }
};
int main()
{
    Solution obj;
    vector<int> arr = {3,6,1,0};
    int product = obj.dominantIndex(arr);
    cout << product;
}
