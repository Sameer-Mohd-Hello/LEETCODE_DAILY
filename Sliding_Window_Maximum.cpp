#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> res;
        int n = nums.size();
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                res.push_back(nums[dq.front()]);
        }
        return res;
    }
};

int main()
{
    vector<int> s = {1, 3, -1, -3, 5, 3, 6, 7};
    Solution obj;
    vector<int> a = obj.maxSlidingWindow(s, 3);
    cout << "Largest elements in  window size k are : ";
    for (auto it : a)
    {
        cout << it << " ";
    }
}
