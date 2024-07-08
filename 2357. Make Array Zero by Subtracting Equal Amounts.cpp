// url = https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> uniqueNumber;
        for(auto i: nums){
            uniqueNumber.insert(i);
        }
        if(uniqueNumber.find(0)!=uniqueNumber.end())
        return uniqueNumber.size()-1;
        else return uniqueNumber.size();
    }
};