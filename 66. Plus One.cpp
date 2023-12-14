// url = https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            int carry = 1,i;
            for(i=digits.size()-1; carry && i >= 0 ; i--){
                int tmp = digits[i] + carry;
                carry = tmp/10;
                digits[i] = tmp%10;
            }
            if(carry){
                digits.insert(digits.begin(),1);
            }
            
        return digits;
    }
};
