// url = https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0,q = nums.size();
        for(int i=0; i<q; i++){
            if(nums[i]!=0) nums[p++] = nums[i];
        }
        while(p<q){
            nums[p++] = 0;
        }
    }
};
