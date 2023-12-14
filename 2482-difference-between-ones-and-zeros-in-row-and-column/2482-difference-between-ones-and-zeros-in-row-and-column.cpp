class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        // vector<vector<int>> diff(grid.size(),vector<int> );
        
        vector<int> onesRow(grid.size()),onesCol(grid[0].size());
        vector<int> zerosRow(grid.size()),zerosCol(grid[0].size());
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    onesRow[i]++;
                    onesCol[j]++;
                    
                }
                else{
                    zerosRow[i]++;
                    zerosCol[j]++;
                    
                }
                
                
            }
            
            
        }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=onesRow[i]+onesCol[j]-zerosRow[i]-zerosCol[j];
            }
        }
        
        return grid;
    }
};