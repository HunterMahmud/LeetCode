// url = https://leetcode.com/problems/sum-of-digits-of-string-after-convert


class Solution {
public:
    int getLucky(string s, int k) {
        int res = 0;
        for(int i=0; i<s.size(); i++){
            int x = s[i]-'0'-48;
            if(x>9){
                while(x>0){
                    res += x%10;
                    x/=10;
                }
            }
            else res += x;
        }
        if(k==1) return res;
        int prev = 0;
        
        for(int i=1; i < k; i++){
            while(res > 0){
                prev += (res%10);
                res/=10;
            }
            //cout<<prev;
            res = prev;
            prev = 0;
        }
        return res;
    }
};
