// url = https://leetcode.com/problems/find-the-difference-of-two-arrays


class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        vector<int>b;
        /// remove duplicate
        a.push_back(nums1[0]);
        b.push_back(nums2[0]);
        for(int i=1;i<nums1.size(); i++){
            bool f = true;
            for(int j: a){
                if(nums1[i]==j) f = false;
            }
            if(f) a.push_back(nums1[i]);
        }
        for(int i=1;i<nums2.size(); i++){
            bool f = true;
            for(int j: b){
                if(nums2[i]==j) f = false;
            }
            if(f) b.push_back(nums2[i]);
        }
        vector<int> c;
        vector<int> d;
        //vector<vector<int>> res;
        for(int i: a){
            bool f = true;
            for(int j: b){
                if(j==i) f = false;
            }
            if(f) c.push_back(i);
            
        }
        for(int i: b){
            bool f = true;
            for(int j: a){
                if(j==i) f = false;
            }
            if(f)  d.push_back(i);
        }
        return {c,d};
    }
};
