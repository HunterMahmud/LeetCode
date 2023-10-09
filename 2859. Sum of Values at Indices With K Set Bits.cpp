// url = https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n ; i++){
                int cnt=0;
                int num = i;
                while(num!=0){
                    if(num&1) cnt++;
                    num>>=1;
                }
            if(cnt==k) sum+=nums[i];
        }
        return sum;
    }
};
