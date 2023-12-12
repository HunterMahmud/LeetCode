// url = https://leetcode.com/problems/count-common-words-with-one-occurrence

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) { 
        int ans = 0;
        unordered_map<string, int> result;
        for(auto i: words1){
            result[i] = 0;
        }
        for(auto i: words1){
            for(auto j: words2){
                if(i==j) result[i]++;
            }
        }
        for(const auto& i : result){
            if(i.second==1) ans++;
        }
        return ans;
    }
};
