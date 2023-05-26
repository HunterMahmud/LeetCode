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

/// using bitwise operator to solve the problem
class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while(num>0){
            if(!(num&1)) num>>=1; 
            else --num;
            ++step;
        }
        return step;
    }
};



