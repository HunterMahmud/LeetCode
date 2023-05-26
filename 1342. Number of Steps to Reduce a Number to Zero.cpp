// url = https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        if(num==0) return step;
        while(num>0){
            if(!(num%2)) {num/=2; ++step;}
            else {--num; ++step;}
        }
        return step;
    }
};
