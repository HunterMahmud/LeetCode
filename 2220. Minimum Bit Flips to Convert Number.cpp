// url = https://leetcode.com/problems/minimum-bit-flips-to-convert-number

class Solution {
public:
    int minBitFlips(int start, int goal) {
        if((start^goal)==0) return 0;
        int cnt = 0;
        for(int i=0; i<31; i++){
            if((start&1)!=(goal&1))  ++cnt;
            start>>=1;
            goal>>=1;
        }
        return cnt;
    }
};
