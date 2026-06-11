// url = https://leetcode.com/problems/add-to-array-form-of-integer


/** approach:
Add the k with the num[len−1] index then do the operation num[len−1]%10 then to get do k=num[len−1]/10. do the operation until the k gets zero or len gets zero.
And when k is bigger than the num then insert first of the k's value one by one with mod then reduce the k value dividing by 10.
*/


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int len = num.size();
        while(k>0 || len>0){
            if(len>0) {
                num[len-1]+=k;
                k = num[len-1]/10;
                num[len-1] %= 10;
            } else{
               num.insert(num.begin(), k%10);
                k /= 10;
            }
            len--;
        }
        return num;
    }
};