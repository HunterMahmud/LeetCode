// url = https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> res(n);
        int mx=0;
        for(int i: candies){
            if(mx<i) mx=i;
        }
        //cout<<mx;
        for(int i=0;i<candies.size();i++){
            if(mx-candies[i]>=0 && mx-candies[i]<=extraCandies) res[i] = true;
            else res[i]=false;
        }
        return res;
    }
};
