// url = https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string h, string n) {
        for(int i=0; i < h.length(); i++){
            int j=0,k=i;
            for(;j<n.length(); ){
                if(h[k++] != n[j]) break;
                else j++;
            }
            //cout<<i<<' '<<j<<' ';
            if(j==n.length()) return i;
        }
        return -1;
    }
};
