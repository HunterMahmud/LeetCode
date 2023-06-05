// url = https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

class Solution {
public:
    string removeDuplicates(string s) {
        string t;
        t = s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==t.back()) t.pop_back();
            else t.push_back(s[i]);            
        }
        return t;
    }
};
