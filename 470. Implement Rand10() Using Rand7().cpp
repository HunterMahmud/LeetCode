// url = https://leetcode.com/problems/implement-rand10-using-rand7

class Solution {
public:
    int rand10() {
        int ans= 41;
        while(ans >= 40){
            ans= 7*(rand7()-1)+(rand7()-1);
        }
        return (ans%10) +1;
    }
};
