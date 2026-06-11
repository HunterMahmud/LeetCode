// url = https://leetcode.com/problems/add-binary/description/

class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int len1 = a.size();
        int len2 = b.size();

        int  carry = 0;
        int i=len1-1, j=len2-1;

        while(i>-1 && j>-1){
            int n1= a[i] - '0';
            int n2= b[j] - '0';

            if(n1 + n2 + carry == 0){
                res += '0';
            }
            else if(n1 + n2 + carry == 1){
                carry = 0;
                res += '1';
            }
            else if(n1 + n2 + carry == 2){
                carry = 1;
                res += '0';
            }
            else if(n1 + n2 + carry == 3){
                carry = 1;
                res += '1';
            }
            i--, j--; 
        }
        
        if(i > -1){
            while(i>-1){
                if((a[i] - '0') + carry == 0){
                    res += '0';
                }
                else if((a[i] - '0') + carry == 1){
                    carry = 0;
                    res += '1';
                }
                else if((a[i] - '0') + carry == 2){
                    carry = 1;
                    res += '0';
                }
                i--;
            }
        }
        if(j > -1){
            while(j>-1){
                if((b[j] - '0') + carry == 0){
                    res += '0';
                }
                else if((b[j] - '0') + carry == 1){
                    carry = 0;
                    res += '1';
                }
                else if((b[j] - '0') + carry == 2){
                    carry = 1;
                    res += '0';
                }
                j--;
            }
        }
        if(carry){
            res += '1';
        }

        reverse(res.begin(), res.end());
        return res;
    }
};