// url = https://leetcode.com/problems/count-the-digits-that-divide-a-number


class Solution {
public:
    int countDigits(int num) {
        if(num<10) return 1;
        vector<int> ar;
        int n = num;
        int cnt = 0;
        while(num>0){
            ar.push_back(num%10);
            num /= 10;
        }
        for(auto i: ar){
            if(n%i==0) cnt++;
        }
        return cnt;
    }
};
