// url = https://leetcode.com/problems/single-number-iii

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>mp;
        vector<int>res;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            if(i.second == 1) res.push_back(i.first);
        }
        return res;
    }
};
