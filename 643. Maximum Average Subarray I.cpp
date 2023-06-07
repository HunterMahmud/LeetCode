// url = https://leetcode.com/problems/maximum-average-subarray-i
// using prefix sum
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        //vector<int> res(nums.size());
        for(int i=1;i<n;i++){
            nums[i] = nums[i] +nums[i-1];
        }
        int mx = nums[k-1];
        for(int i=k;i<n;i++){
            if(mx < (nums[i]-nums[i-k])) mx = nums[i]-nums[i-k];
        }
        
        return double(mx)/k;
    }
};
