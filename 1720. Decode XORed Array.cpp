// url = https://leetcode.com/problems/decode-xored-array


class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        encoded.insert(encoded.begin(),first);
        for(int i=1; i<encoded.size(); i++){
            encoded[i] ^= encoded[i-1];
        }
        return encoded;
    }
};
