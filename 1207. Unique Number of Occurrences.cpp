// url = https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>a, times;
        bool res = false;
        if(arr.size()==1) return res;
        /// remove duplicate
        a.push_back(arr[0]);
        
        for(int i=1;i<arr.size(); i++){
            bool f = true;
            for(int j: a){
                if(arr[i]==j) {f = false; }
            }
            if(f) a.push_back(arr[i]);
        }
        for(int i=0;i<a.size();i++){
            int cnt=0;
            for(int j=0;j<arr.size();j++){
                if(arr[j]==a[i]) cnt++;
            }
            times.push_back(cnt);
        }
        
        for(int i=0;i<times.size()-1;i++){
           for(int j=i+1;j<times.size();j++){
               if(times[i]==times[j]) return false;
           }
        } 
        return true;     
    }
};
