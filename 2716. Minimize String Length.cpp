// url = https://leetcode.com/problems/minimize-string-length

class Solution {
public:
    int minimizedStringLength(string s) {
        string t;
        int n = s.size();
        sort(s.begin(),s.end());
        char ch= s[0];
        t.push_back(ch);
        for(int i=1;i<n;i++){
            if(ch!=s[i]) {
                t.push_back(ch);
                ch = s[i];
            }
        }
        
        return t.size();
    }
};
