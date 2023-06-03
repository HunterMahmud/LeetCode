// url = https://leetcode.com/problems/reverse-string-ii

class Solution {
public:
    void reverse(string &s , int l, int r){
        for(int i=l,j=r;i<j;i++,j--){
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
        }
    }
    string reverseStr(string s, int k) {
        int n = s.size();
        if(n==1) return s;
        for(int i=0; i<n; i+=2*k){
            int p = i+k;
            if(p-1>= n) reverse(s,i,n-1);
            else reverse(s,i,p-1);
           }
        return s;
    }
};
