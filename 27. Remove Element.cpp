// url = https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> a;
        int cnt=0;
        for(int i: nums){
            if(val!=i) {a.push_back(i);cnt++;}
        } 
        nums = a;
        return cnt;
    }
};
