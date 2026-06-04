//url = https://leetcode.com/problems/powx-n

/**
What I did here is just refactoring the way we calculate.
3^5 is 3∗3∗3∗3∗3 -> 5 times need to run the loop.
but we can do this way:
here the power 5 is odd.
we have 3∗3^4 so what we can do result∗=3 and we have 3^4 left.
now the power 4 is even. so we will devide by 2.
then we do this -> (3^2)^2-> 9^2

now we set the newBase with 9.
Then the loops continue and return the result.
Also the similar for negative power just the multiplication will be replace by division. */
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1) return 1.0000;
        double result=1.00;

        while(n>0){
            if(n%2){
                result *= x;
                n--;
            }
            else {
                x *= x;
                n/=2;
            }
        }
        while(n<0){
             if(n%2==-1){
                result /= x;
                n++;
            }
            else {
                x *= x;
                n/=2;
            }
        }
        return result;
    }
};