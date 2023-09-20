class Solution {
public:
     void rotate(vector<vector<int>>& matrix) {
      int n=matrix.size();
   
         
        //taking transpose of the matrix
       for(int i=0;i<n;i++)
           for(int j=0;j<i;j++)
               swap(matrix[i][j],matrix[j][i]);
         
         
        //reversing the transposed matrix to get 90 deg rotation
        for(int i=0;i<n;i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
       
};