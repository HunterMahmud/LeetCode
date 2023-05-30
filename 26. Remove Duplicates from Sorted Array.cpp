// url = https://leetcode.com/problems/remove-duplicates-from-sorted-array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // removing duplicated
        vector<int> a;
        a.push_back(nums[0]);
        
        for(int i=1;i<nums.size(); i++){
            bool f = true;
            for(int j: a){
                if(nums[i]==j) {f = false; }
            }
            if(f) a.push_back(nums[i]);
        }
        nums = a;
        return a.size();
    }
};
