// url = https://leetcode.com/problems/count-integers-with-even-digit-sum

class Solution {
public:
    int countEven(int num) {
        int cnt=0;
        if(num<2) return 0;
        if(num<10) return num/2;
        cnt = 4;
        for(int i=11; i<= num; i++){
            int prev = i;
            int sum = 0;
            while(prev>0){
                sum+=prev%10;
                prev/=10;
            }
            if(sum%2==0) cnt++;
        }
        return cnt;
    }
};
