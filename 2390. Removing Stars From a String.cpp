// url = https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        string t;
        t = s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]=='*') t.pop_back();
            else t.push_back(s[i]);
        }
        return t;
    }
};
