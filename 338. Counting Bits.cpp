// url = https://leetcode.com/problems/counting-bits
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0; i<=n ; i++){
                int cnt=0;
                int num = i;
                while(num!=0){
                    if(num&1) cnt++;
                    num>>=1;
                }
            res.push_back(cnt);
        }
        return res;
    }
};
