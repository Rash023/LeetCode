class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size()) return {};
        
        vector<vector<int>> ans(m,vector<int> (n));
        int cnt=0;
        int index=0;
        
        int rowIndex=0;
        int colIndex=0;
        
        while(rowIndex<m && index<original.size()){
            if(cnt<n){
                ans[rowIndex][colIndex++]=original[index++];
                cnt++;
                
            }
            else{
                rowIndex++;
                colIndex=0;
                cnt=0;
            }
        }
        
     
        
        
        return ans;
    }
};