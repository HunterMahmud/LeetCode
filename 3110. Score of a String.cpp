// url = https://leetcode.com/problems/score-of-a-string/


class Solution {
public:
    int scoreOfString(string s) {
        int total = 0;
        for(int i=0; i<s.size()-1; i++){
            total += abs(int(s[i]) - int(s[i+1]));
        }
        return total;
    }
};