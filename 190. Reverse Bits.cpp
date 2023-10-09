// url = https://leetcode.com/problems/reverse-bits

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        int n_of_bits = 32;
        while(n!=0){
            res |= (n&1) << (n_of_bits-1);
            n>>=1;
            n_of_bits--;
        }
    return res;
    
    }
};
