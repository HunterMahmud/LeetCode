//url = https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = int(sqrt(num));
        if(i*i==num) return true;
        else return false;
    }
};
