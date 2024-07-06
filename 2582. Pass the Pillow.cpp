// url = https://leetcode.com/problems/pass-the-pillow

class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle = n-1;
        int iteration = time / cycle;
        if(iteration%2==0){
            if(time%cycle==0) return 1;
            return (time%cycle)+1;
        }
        else{
            if(time%cycle==0) return n;
            return n-(time%cycle);
        }
    }
};