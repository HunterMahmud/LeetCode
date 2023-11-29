// url = https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal


class Solution {
public:
    string swap(string s, int i, int j){
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
        return s;
    }
    bool areAlmostEqual(string s1, string s2) {
        if(s1.compare(s2)==0) return true;
        for(int i=0; i<s1.size()-1; i++){
            for(int j=i+1; j<s1.size(); j++){
                string s = swap(s2,i,j);
                //cout<<s<<endl;
                if(s1.compare(s)==0) return true;
            }
        }
        return false;
    }
};
