// url = https://leetcode.com/problems/apply-operations-to-an-array

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       int s = nums.size();
       for( int i=0; i< s-1; i++){
           if(nums[i]==nums[i+1]){
               nums[i]*=2;
               nums[i+1]=0;
           }
       }
       
       int index = 0;
       for(int i=0;i<s;i++){
           if(nums[i]!=0) {
               nums[index++] = nums[i];
           }
       }
       while(index<s){
           nums[index++] = 0;
          
       }
       return nums;
    }
};
