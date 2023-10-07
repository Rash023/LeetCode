class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int j=0;
            int k=image[0].size()-1;
            while(j<k){
                image[i][j]=!image[i][j];
                image[i][k]=!image[i][k];
                swap(image[i][j++],image[i][k--]);
            }
            if(image[0].size()&1){
                image[i][j]=!image[i][j];
            }
            
        }
        
        return image;
    }
};