// url = https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        bool p=true;
        int n;
        if(word1.length()>word2.length()) {
            n = word2.length();
            p = false;
        }
        else n=word1.length();
        for(int i=0; i<n; i++){
            result+=word1[i];
            result+=word2[i];
        }
        if(p){
            for(n-1;n<word2.length();n++)
            {
                result+=word2[n];
            }
        }
        else{
            for(n-1;n<word1.length();n++){
                result+=word1[n];
            }
        }
        return result;
    }
};
