// url = https://leetcode.com/problems/unique-number-of-occurrences
/// 1st solution taking more time but in space its can beats 88.77%
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
///--------------------------------------------
/// 2nd solution taking less time beats 59.70% but in space its not perfect

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> times(2002,-1001);
        bool res = false;
        if(arr.size()==1) return res;
        
        for(int i:arr){
            times[1000+i]++;
        }
        
        for(int i=0;i<times.size()-1;i++){
            if(times[i]==-1001) continue;
           for(int j=i+1;j<times.size();j++){
               if(times[i]==times[j]) return false;
           }
        } 
        return true;     
    }
};
