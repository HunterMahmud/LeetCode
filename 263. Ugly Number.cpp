// url = https://leetcode.com/problems/ugly-number

class Solution {
public:
    bool isUgly(int n) {
        if(n<1) return false;
        int prev = n;
        while(n!=1){
        if(!(n%2)) n/=2;
        else if(!(n%3)) n/=3;
        else if(!(n%5)) n/=5;
        if(n==prev) return false;
        prev = n;
        }
        return true;
    }
};
