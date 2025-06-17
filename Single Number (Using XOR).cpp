#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
    int singleelement(vector<int> arr){
        int element=0;
        for(int eleme:arr){
            element ^= eleme;
        }
        return element;
    }
};
    int main(){
        Solution obj;
        int result = obj.singleelement({1,1,2,2,3,4,4,});
        cout<<result;
        return 0;
    }


