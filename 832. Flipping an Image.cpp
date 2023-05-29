// url = https://leetcode.com/problems/flipping-an-image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int p=image.size();

        //reverse each row
        for(int i=0; i<p; i++){
            for(int j=0; j < p/2; j++){
                int temp = image[i][j];
                image[i][j] = image[i][p-j-1];
                image[i][p-j-1] = temp;
            }
        }

        for(int i=0;i<p;i++){
            for(int j=0; j<image[i].size();j++){
                if(image[i][j]) image[i][j]=0;
                else image[i][j]=1; 
            }
        }
        return image;
    }
    
};
