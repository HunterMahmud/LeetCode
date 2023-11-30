// url = https://leetcode.com/problems/calculate-money-in-leetcode-bank

class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int x = n/7 + 3;
        if(n>6){
            sum += ((x*(x+1)/2)-6)*7;
            n = n % 7;
        }
        if(n){
            for(int i=0; i<n; i++){
                sum += (x-2)+i;
            }            
        }
        return sum;        
    }
};
