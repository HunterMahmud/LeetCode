// url = https://leetcode.com/problems/count-operations-to-obtain-zero

class Solution {
public:
    int countOperations(int num1, int num2) {
        int step = 0;
        if(num1==0 || num2 == 0) return step;
        while(num1>0 && num2>0){
            if(num1>=num2) {num1-=num2;++step;}
            else {num2-=num1; ++step;}
        }
        return step;
    }
};
