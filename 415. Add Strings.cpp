// url = https://leetcode.com/problems/add-strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1= num1.size();
        int len2= num2.size();

        string res;
        int c = 0;
        while(len1>0 || len2>0){
            int digit1 = 0;
            int digit2 = 0;

            if(len1>0) digit1= num1[len1-1]-'0';
            if(len2>0) digit2= num2[len2-1]-'0';

            int total = digit1 + digit2 + c;

            res += (total%10) + '0';
            c = total/10;
            len1--, len2--;
        }
        if(c){
            res += c + '0';
        }
        reverse(res.begin(), res.end());
        return res;
    }
};