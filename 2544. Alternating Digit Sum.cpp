// url = https://leetcode.com/problems/alternating-digit-sum


class Solution {
public:
    int alternateDigitSum(int n) {
        int res = 0;
        if(n>9){
            int x = 0;
            while(n>0){
                x = x*10 + (n%10);
                n/=10;
            }
            n = x;
        }
        for(int i=1;n>0;i++){
            if(i%2){
                res += n%10;
            }
            else{
                res -= n%10;             
            }
            n/=10;
        }
        return res;
    }
};
