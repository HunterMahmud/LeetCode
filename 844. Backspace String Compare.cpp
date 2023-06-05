// url = https://leetcode.com/problems/backspace-string-compare


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string x,y;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && x.size()>0) x.pop_back();
            else if(s[i]!='#') x.push_back(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && y.size()>0) y.pop_back();
            else if(t[i]!='#') y.push_back(t[i]);
        }
        cout<<y<<endl;
        return x==y;
    }
};
