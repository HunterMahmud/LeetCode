// url = https://leetcode.com/problems/find-the-k-beauty-of-a-number

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string nums = to_string(num);
        int cnt=0;
        for(int i=0; i<=nums.size()-k; i++){
            int n = 0;
            for(int j=i; j<k+i; j++){
                n = n*10 + nums[j]-'0';
            }
            if( n!=0 && num%n==0) cnt++;
        }
        return cnt;
    }
};
