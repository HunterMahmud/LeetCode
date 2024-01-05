// url = https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    for(int i=0; i<nums.size(); i++){
        if(mp.count(nums[i])){ // is appear this number before?
            if(i-mp[nums[i]] <= k) return true; // np[nums[i]] = index of the nums[i]; and then minus it from the current i value
        }
        mp[nums[i]] = i; // if this number is not in mp then put the index number on the mp; 
        // every time this value will update by last new value if multiple value comes 
    }
    return false;
  }
};
