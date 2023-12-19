// url = https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k


// solution using bruteforce

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt =0;
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            for(int j= i+1; j<n; j++){
                if(abs(nums[i]-nums[j])==k) cnt++;
            }
        }
        return cnt;
    }
};

