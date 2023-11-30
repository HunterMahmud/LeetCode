// url = https://leetcode.com/problems/sum-of-square-numbers

class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0;
        int j = sqrt(c);
        while( i<=j){
            long long x = (long long)i*i + (long long)j*j;
            if( x == (long long)c) return 1;
            else if( x < (long long)c) i++;
            else j--;
        }
        return 0;
    }
};
