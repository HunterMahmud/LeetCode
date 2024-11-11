// url = https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        int max = 2147483647, min = -2147483648;
        int i=0, n = s.length(), positive = 1, res = 0;
        while(i<n && s[i]==' ') i++;
        
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            positive = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            
            if (res > (max - digit) / 10) {
                return positive == 1 ? max : min;
            }
            res = res * 10 + digit;
            i++;
        }
        
        return positive * res;
    }
};