// url = https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target

// bruoteforce solution 

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+ nums[j]<target) cnt++;
            }
        }
        return cnt;
    }
};


// using two pointer solution

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        int i=0,j=n-1;
        while(i<j){
            if(nums[i]+nums[j]<target){
                cnt += (j-i);
                i++;
            }
            else{
                j--;
            }
        }
        return cnt;
    }
};
