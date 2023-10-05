//link: https://leetcode.com/problems/reshape-the-matrix


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r_len = mat.size();
        int c_len = mat[0].size();
        
        
        if (r_len * c_len != r * c) {
            return mat;
        }
        
        vector<int> flatten;
        for(int i = 0; i < r_len; i++) {
            for(int j = 0; j < c_len; j++) {
                flatten.push_back(mat[i][j]);
            }
        }
        
        mat.clear();
        mat.resize(r, vector<int>(c, 0));
        int cnt = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                mat[i][j] = flatten[cnt++];
            }
        }
        
        return mat;
    }
};
