// url = https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
        string r="";
        int index = 0;
        for(int i=0; i<s.size(); i++){
            char ch = tolower(s[i]);
            if(ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch == 'u'){
                r += s[i]; index++;
            }
        }
        //cout<<r<<"ok";
        for(int i=0; i<s.size(); i++){
            char ch = tolower(s[i]);
            if(ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch == 'u'){
                s[i] = r[--index];
            }
        }
        return s;
    }
};
