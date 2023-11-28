// url = https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value

class Solution {
public:
    bool digitCount(string num) {
        int l = num.size();
        vector<int> res(11,0);
        for(int i=0; i<l; i++){
            int x = num[i]-'0';
            res[x]++;
        }
        for(int i=0; i<l; i++){
            int x = num[i]-'0';
            if(x!=res[i]) return false;
        }
        return true;
    }
};
