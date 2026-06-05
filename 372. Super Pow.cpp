// url = https://leetcode.com/problems/super-pow/

class Solution
{
public:
    const int mod = 1337;
    int powerMod(int base, int exp)
    {
        int res = 1;

        base %= mod;

        while (exp > 0)
        {
            if (exp % 2)
            {
                res = (res * base) % mod;
                exp--;
            }
            else
            {
                base = (base * base) % mod;
                exp /= 2;
            }
        }
        return res;
    }
    int superPow(int a, vector<int> &b)
    {
        if (a >= mod)
            a %= mod;
        if (a == 0 or a == 1)
            return a;

        int len = b.size();
        int res = 1;

        for (int i = 0; i < len; i++)
        {
            res *= powerMod(a, b[i]) % mod;
            res %= mod;
            if (i < len - 1)
            {
                res = powerMod(res, 10) % mod;
                res %= mod;
            }
        }
        return res;
    }
};