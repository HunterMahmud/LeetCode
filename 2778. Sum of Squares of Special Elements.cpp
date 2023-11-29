// url = https://leetcode.com/problems/sum-of-squares-of-special-elements

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0, l = nums.size();
        for(int i=0; i<l; i++){
            if(l%(i+1)==0) sum += nums[i]*nums[i];
        }
        return sum;
    }
};
