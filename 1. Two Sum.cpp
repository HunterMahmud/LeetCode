//url = https://leetcode.com/problems/two-sum/
//1st solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int len = nums.size();
        vector<int>ans;
        for(int i=0;i<len-1;i++){
            for(int j=i+1;j<len;j++){
                if(nums[i]+nums[j]==target) {ans.push_back(i);
                ans.push_back(j);}
            }
        }
        return ans;
    }
        
};
///2nd solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int len = nums.size();
        vector<int>ans;
        vector<pair<int,int>>ar;
        for(int i = 0; i < len; i++)
        {
            ar.push_back({nums[i], i});
        }
        sort(ar.begin(),ar.end());
        bool flag=false;
        int i=0,j=len-1;
         
        while(i<j)
        {
            
            if(ar[i].first+ar[j].first==target)
            {
                ans.push_back(ar[i].second);
                ans.push_back(ar[j].second);
                return ans;
            }
            else if(ar[i].first+ar[j].first>target)
            {
                j--;
            }
            else
                i++;
        }
        
        return ans;
        
    }
        
};
