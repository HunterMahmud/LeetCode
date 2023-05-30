// url = https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool f = false;
        int start = 0;
        for(int i=0; i<s.size();){
            int prev_i=i;
            bool check = false;
            for(int j= start; j < t.size(); j++){
                if(s[i]==t[j]) {
                    i++;
                    start = j+1;
                    check = true;
                    break;
                }
            }
            if(!check || prev_i==i) return f;
        }
        return true;
    }
};
