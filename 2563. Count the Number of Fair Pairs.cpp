// url = https://leetcode.com/problems/count-the-number-of-fair-pairs

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long cnt = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0, j = n-1;
        while(i<j){
            long long tmp = (long long)nums[i] + (long long)nums[j];
            if(lower<=tmp && tmp<=upper){
                int p = i+1;
                while(p<j){
                    long long x = (long long)nums[i] + (long long)nums[p];
                    if(x>=lower){
                        cnt += (j-p);
                        break;
                    }
                    else p++;
                }
                cnt++;
                i++;
            }
            if(lower>tmp) i++;
            if(upper<tmp) j--;

        }
        return cnt;
    }
};
