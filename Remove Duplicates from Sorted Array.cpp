#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int j=1;j<nums.size();j++){
            if(nums[k]!=nums[j]){
                k++;
                nums[k]=nums[j];
            }
        }
        
    return k+1;
    }
};
int main(){
    vector<int> arr={1,2,2,3,4,4,5};
    Solution obj;
    int solution=obj.removeDuplicates(arr);
    cout<<solution;
}
