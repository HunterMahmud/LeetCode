// url = https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=-99;
        for(int i=0; i < accounts.size(); i++)
        {
            int j;
            for(j=1; j < accounts[i].size(); j++){
                accounts[i][j] += accounts[i][j-1];
            }
            if (accounts[i][j-1] > mx) mx = accounts[i][j-1];
        }
        return mx;
    }
};
