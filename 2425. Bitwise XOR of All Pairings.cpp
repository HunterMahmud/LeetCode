// url = https://leetcode.com/problems/bitwise-xor-of-all-pairings

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        if(nums1.size()%2==0 && nums2.size()%2==0){
            return ans;
        }
        if(nums1.size()%2==0){
            for(auto i: nums1){
                ans^=i;
            }
            return ans;
        }
        if(nums2.size()%2==0){
            for(auto i: nums2){
                ans^=i;
            }
            return ans;
        }
        for(auto i: nums1){
            ans^=i;
        }
        for(auto i: nums2){
            ans^=i;
        }
        return ans;
    }
};
