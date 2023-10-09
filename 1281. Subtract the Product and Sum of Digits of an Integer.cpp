// url = https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer


class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n!=0){
            int p = n%10;
            product *= p;
            sum += p;
            n/=10;
        }
        return product-sum;
    }
};
