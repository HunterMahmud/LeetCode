//url = https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        int len=s.length();
        int total=0,i,j,prev=-10000,next;
        pair<char,int>p[]={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(i=len-1;i>=0;i--)
        {
            for(j=0;j<7;j++)
            {
                if(s[i]==p[j].first)
                {
                    next=p[j].second;
                    total+=next;
                    if(i!=len-1 && prev>next)
                        {
                            total-=2*next;
                        }
                    prev=next;
              
                }  
            }
            
        }
    return total;    
}
};
