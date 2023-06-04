// url = https://leetcode.com/problems/most-frequent-even-element

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> cnt(1e5+1,0);
        int mx =0;
        for(int i: nums){
            if(i%2==0) {cnt[i]++;
            if(mx<i) mx =i;
            }
        }
        cout<<mx<<endl;
        int most = 0;
        int res = -1;
        for(int i=0;i<=mx;i+=2){
            if(cnt[i]!=0 && cnt[i]>most){
                res=i;
                most = cnt[res];
            } 
            
        }
        return res;
    }
};
