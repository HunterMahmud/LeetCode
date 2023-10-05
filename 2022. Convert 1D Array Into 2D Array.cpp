// url = https://leetcode.com/problems/convert-1d-array-into-2d-array

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        

        if(m*n != original.size()) {
            return {};
       }
       vector<vector<int>> mat(m, vector<int>(n,0));
       int cnt=0;
       for(int i=0;i<m; i++){
           for(int j=0; j<n; j++){
               mat[i][j] = original[cnt++];
           }
       }
       return mat;
    }
};
