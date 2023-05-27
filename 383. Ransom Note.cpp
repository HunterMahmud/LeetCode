// url = https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i=0;
        for(; i < ransomNote.size();){
            int iprev=i;
            for(int j=0;j<magazine.size();j++){
                if(ransomNote[i]==magazine[j])
                {
                    cout<<i<<endl;
                    magazine[j]='-';
                    i++;
                    break;
                }
                
            }
        if(iprev==i) return false;
        }
        if(i==ransomNote.size()) return true;
        return false;
    }
};
