// url = https://leetcode.com/problems/happy-number

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        if(n==1) return true;
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            int temp = 0;
            while(n!=0){
                int digit = n % 10;
                temp += digit*digit;
                n /= 10;
            }
            n = temp;
        }
        return n==1;
    }
};
