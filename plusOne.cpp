#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k=digits.size()-1;
        for(int i=k;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
            digits[i]=0;
        }
            digits.insert(digits.begin(),1);
                return digits;
    }
};
int main()
{
    vector<int> arr{3, 2, 3, 9};
    Solution obj;
    vector<int> arr1= obj.plusOne(arr);
    for(int i=0;i<arr.size();i++){
        cout << arr1[i]; 
}
   return 0;
}
