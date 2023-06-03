// url = https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    void reverse(string &s,int l, int r){
        for(int i=l,j=r;i<j;i++,j--){
            swap(s[i],s[j]);
        }
    }
    string reverseWords(string s) {
        int n = s.size();
        int l=0,r;
        //word separation
        for(int i=0;i<n;i++){
            if(s[i]==' ') {
                r = i;
                reverse(s,l,r-1);
                l = r+1;
            }
            if(i+1==n){
                r = i;
                reverse(s,l,r);
            }
        }
        return s;
    }
};
