// url = https://leetcode.com/problems/contains-duplicate


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> hashSet;
        for(int i=0; i<nums.size(); i++){
            if(hashSet.find(nums[i])!=hashSet.end()) return true;
            else hashSet.insert(nums[i]);
        }
        return false;
    }
};
