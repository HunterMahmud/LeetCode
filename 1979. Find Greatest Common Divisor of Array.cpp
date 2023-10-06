// url = https://leetcode.com/problems/find-greatest-common-divisor-of-array

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=-999999, mn = 999999;
        for(int i: nums){
            if(i>mx) mx = i;
            if(i<mn) mn = i;
        }
    while (mx != 0) {
        int temp = mx;
        mx = mn % mx;
        mn = temp;
    }
    return mn;
    }
};
