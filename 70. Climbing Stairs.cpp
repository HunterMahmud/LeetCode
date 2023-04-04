//url = https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
    int ans, a = 0, b = 1;
    n++;
    if(n <= 1)
    {
        ans = n;
    }
    else
    {
        for(int i = 2; i <= n; i++)
        {
            ans = a + b;
            a = b;
            b = ans;
        }
    }
    return ans;
    }
};
