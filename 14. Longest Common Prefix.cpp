//url = https://leetcode.com/problems/longest-common-prefix/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool flag=true;
        int len,flen=201,res=-1;
        if(strs.size()==0) return "";
        for(int i=0;i<strs.size();i++)
        {
            len=strs[i].size();
            
            if(flen>len) flen=len;
        }
        
        for(int i=0;i<flen;i++)
        {
            int j=0;
            if(flag)
            while(j<strs.size()-1)
            {
                char s;
                s= strs[j][i];
                if(s==strs[j+1][i])
                {
                    j++;
                }
                else
                {
                    flag=false;
                    break;
                }
                    
            }
            if(flag)
            {
                res++;
                ans.push_back(strs[0][res]);  
            }
            else break;
        }
        
        return ans;
    }
};
