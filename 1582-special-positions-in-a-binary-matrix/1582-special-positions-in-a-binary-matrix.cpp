class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rows(mat.size()),cols(mat[0].size());
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]){
                    rows[i]++,cols[j]++;
                    
                }
            }
        }
        
        
        int cnt;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] && rows[i]==1 && cols[j]==1){
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};