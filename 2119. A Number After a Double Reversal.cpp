// url = https://leetcode.com/problems/a-number-after-a-double-reversal

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        if(num>0 && (num%10==0)) return false;
        return true;
    }
};
