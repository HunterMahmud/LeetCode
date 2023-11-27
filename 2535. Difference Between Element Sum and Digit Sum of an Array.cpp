// url = https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumOfNums = 0, sumOfDigit = 0;
        for(int i: nums){
            sumOfNums += i;
            while(i>0){
                sumOfDigit += (i%10);
                i/= 10;
            }
        }
        return sumOfNums - sumOfDigit;
    }
};
