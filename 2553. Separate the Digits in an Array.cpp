// url = https://leetcode.com/problems/separate-the-digits-in-an-array


class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for(int i:nums){
            int prev = i;
            vector<int> rev;
            while(prev>0){
                rev.push_back(prev%10);
                prev/=10;
            }
            int l = rev.size();
            while(l){
                res.push_back(rev[--l]);
            }
        }
        return res;
    }
};
