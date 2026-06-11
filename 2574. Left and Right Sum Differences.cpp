// url = https://leetcode.com/problems/left-and-right-sum-differences/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int total = 0;
        int leftTotal = 0;
        int len = nums.size();
        for(int i=0; i<len; i++){
            total += nums[i];
        }
        for(int i=0; i<len; i++){
            leftTotal += nums[i];
            ans.push_back(abs(total - leftTotal));
            total -= nums[i];
        }
        return ans;
    }
};