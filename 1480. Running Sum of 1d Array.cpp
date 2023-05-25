//This solution
//Runtime 8 ms Beats 18.54% Memory 8.3 MB Beats 99.95%


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        long long x = 0;
        for(int i=0; i<nums.size(); i++)
        {
            x += nums[i];
            nums[i] = x;
        }
        return nums;
    }
};

//----------------------------------
//Runtime 0 ms Beats 100% Memory 8.6 MB Beats 34.39% 

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int x = 0, i = 0;
        for(int j: nums)
        {
            x += j;
            nums[i++] = x;
        }
        return nums;
    }
};
