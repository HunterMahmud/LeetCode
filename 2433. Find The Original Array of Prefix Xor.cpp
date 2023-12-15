// url = https://leetcode.com/problems/find-the-original-array-of-prefix-xor


// solution 1

//Runtime 90 ms Beats 45.23% Memory 76.4 MB Beats 42.54%

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        pref.insert(pref.begin()+1,pref[0]);
        for(int i=1; i<pref.size()-1;i++){
            pref[i]^=pref[i+1];
        }
        pref.pop_back();
        return pref;
    }
};


/// solution 2

// Runtime 74 ms Beats 93.13% Memory 79.9 MB Beats 6%


class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        for(int i=1; i<pref.size();i++){
            ans.push_back(pref[i]^pref[i-1]);
        }
        return ans;
    }
};
