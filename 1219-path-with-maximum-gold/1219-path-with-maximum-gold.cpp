class Solution {
public:
    int n,m;
    vector<vector<int>> directions{{-1,0},{1,0},{0,-1},{0,1}};
    
    int solve(int i,int j,vector<vector<int>>&grid){
        if(i>=n || j>=m || j<0 || i<0 || grid[i][j]==0) return 0;
        int originalValue=grid[i][j];
        grid[i][j]=0;
        int maxGold=0;
        for(vector<int> &v:directions){
            int new_i=v[0]+i;
            int new_j=v[1]+j;
            
            maxGold=max(maxGold,solve(new_i,new_j,grid));
            
        }
        
        
        grid[i][j]=originalValue;
        
        return originalValue+maxGold;
        
        
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold=INT_MIN;
        n=grid.size();
        m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    int temp=solve(i,j,grid);
                    maxGold=max(maxGold,temp);
                }
                
                
            }
        }
        
        
        return maxGold==INT_MIN?0:maxGold;
        
    }
    
    
    
};