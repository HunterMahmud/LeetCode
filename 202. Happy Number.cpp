// url = https://leetcode.com/problems/happy-number

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        bool f = true;
        if(n==1 || n==10) return f;
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            if(n==1 || n==10) return f;
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
