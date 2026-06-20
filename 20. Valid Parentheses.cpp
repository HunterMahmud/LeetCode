// url ==https://leetcode.com/problems/valid-parentheses


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch: s){
            if(ch == '(' || ch=='{' || ch == '['){
                st.push(ch);
            }
            else{
                if((ch == ')' || ch=='}' || ch == ']') && st.empty() == 1) return false;

                if(ch == ')' && st.top() != '(') return false;

                else if(ch == '}' && st.top() != '{') return false;

                else if(ch == ']' && st.top() != '[') return false;
                else st.pop();
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
