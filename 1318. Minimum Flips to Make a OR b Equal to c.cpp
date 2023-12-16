// url = https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c


class Solution {
public:
    int minFlips(int a, int b, int c) {
        if((a|b)==c) return 0;
        int cnt=0;
        for(int i=0; i<31; i++){
            if((a&1) && (b&1) && (c&1)==0){
                cnt+=2;
            }
            else if(((a&1) || (b&1))&& (c&1)==0){
               cnt++;
            }
            else if((a&1)==0 && (b&1)==0 && (c&1)) cnt++;
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return cnt;
    }
};
