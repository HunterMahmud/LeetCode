// url = https://leetcode.com/problems/intersection-of-two-arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> temp;
        temp.push_back(nums1[0]);
        for(auto i: nums1){
            bool flag = true;
            for(auto j: temp){
                if(i==j){
                    flag = false;
                }
            }
            if(flag) temp.push_back(i);
        }
        for(auto i: temp){
            for(auto j: nums2){
                if(i==j) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
