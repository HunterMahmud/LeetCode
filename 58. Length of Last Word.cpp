// url = https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int len = s.size();
        bool flag = false;
        for(int i=s.size()-1; i> -1 ; i--){
            if(s[i]!=' ') {
                ans++;
                flag = true;
            }
            if(flag && s[i]==' ') return ans;
        }
        return ans;
    }
};
