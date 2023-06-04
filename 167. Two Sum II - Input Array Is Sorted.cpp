// url = https://leetcode.com/problems/two-sum-ii-input-array-is-sorted
// best one solution
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //vector<int> ans;
        int i,j;
        int len = numbers.size();
        for(i=0,j=len-1;i<len-1 && i<j;){
            if(numbers[i]+numbers[j]>target){ j--;}
            else if(numbers[i]+numbers[j]<target) {i++;}
            else if(numbers[i]+numbers[j]==target){
               return {i+1,j+1};
               // break;
            }
        }
        return {0,0};
    }
};


/// not best
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i,j;
        int len = numbers.size();
        for(i=0,j=len-1;i<len-1 && i<j;){
            if(numbers[i]+numbers[j]>target){ j--;}
            else if(numbers[i]+numbers[j]<target) {i++;}
            else if(numbers[i]+numbers[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }
        return ans;
    }
};
