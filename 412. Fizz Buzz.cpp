// url = https://leetcode.com/problems/fizz-buzz
// This solution Runtime 0 ms Beats 100% Memory 7.2 MB Beats 88.90%


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n);
        for(int i=1; i<=n; i++){
            if(!(i%15)) result[i-1] = "FizzBuzz";
            else if(!(i%3)) result[i-1] = "Fizz";
            else if(!(i%5)) result[i-1] = "Buzz";
            else 
            {
                int number = i;
                string r;
                while (number > 0) {
                    char digit = '0' + (number % 10);
                    r = digit + r;
                    number /= 10;
                    
                }
                result[i-1] = r;
    
            }
            
        }
        return result;
    }
};
