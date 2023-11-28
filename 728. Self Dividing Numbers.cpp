// url = https://leetcode.com/problems/self-dividing-numbers


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i<= right; i++){
            if(i<10) ans.push_back(i);
            else{
                vector<int> ar;
                int n = i;
                while(n>0){
                    ar.push_back(n%10);
                    n /= 10;
                }
                int f = true;
                for(auto j: ar){
                    if(j==0) {f = false; break;}
                    if(i%j!=0) {f = false; break;}
                }
                if(f){
                    ans.push_back(i);
                }
            }
        }

        return ans;
    }
};


