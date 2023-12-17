// url = https://leetcode.com/problems/kth-distinct-string-in-an-array

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> tmp;
        for(auto i: arr){
            tmp[i]++;
        }

        vector<string> res;
        for(auto i: arr){
            if(tmp[i]==1) res.push_back(i);
        }
        if(res.size()>=k) return res[k-1];
        return "";
    }
};
