// url = https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x


/// 1st solution my best one

class Solution {
public:
    int specialArray(vector<int>& nums) {
        //vector<int> r(102,0);
        int x = nums.size();
        for(int i=1;i<=x;i++){
            int cnt=0;
            for(int j=0; j<x; j++){
                if(nums[j]>=i) cnt++;
            }
            if(i==cnt) return i;
        }
        /*
        for(int i=1; i<=x; i++){
            //cout<<i<<' '<<r[i]<<endl;
            if(i==r[i]) return i;
        }
        */
        return -1;
    }
};
