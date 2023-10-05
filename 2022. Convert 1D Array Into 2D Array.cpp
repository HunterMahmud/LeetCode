// url = https://leetcode.com/problems/convert-1d-array-into-2d-array

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> mat;

        if(m*n != original.size()) {
            return mat;
       }
        mat.resize(m, vector<int>(n));
       int cnt=0;
       for(int i=0;i<m; i++){
           for(int j=0; j<n; j++){
               mat[i][j] = original[cnt++];
           }
       }
       return mat;
    }
};
