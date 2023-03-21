#https://leetcode.com/problems/single-number/submissions/919655425/
#solved by Mahmud

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       int result = 0;
    for(int num : nums) {
        result ^= num;
    }
    return result;
    }
};
int main()
{
    Solution s;
    vector<int> nums;
    int n,num;
    cin>>n;
    nums.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>num;
        nums[i] = num;
    }
    int res = s.singleNumber(nums);
    cout<<res<<endl;
}
