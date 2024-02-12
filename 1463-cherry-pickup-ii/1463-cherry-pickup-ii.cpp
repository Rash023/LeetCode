class Solution {
public:
    int t[71][71][71];
    
    int solve(vector<vector<int>> &grid,int row,int c1,int c2){
        if(row>=grid.size()) return 0;
        int cherry= c1==c2? grid[row][c1]:grid[row][c1]+grid[row][c2];
        int ans=0;
        
        if(t[row][c1][c2]!=-1){
            return t[row][c1][c2];
            
        }
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int newRow=row+1;
                int newC1=c1+i;
                int newC2=c2+j;
                
                if(newC1>=0 && newC1<grid[0].size() && newC2>=0 && newC2<grid[0].size())
                    ans=max(ans,solve(grid,newRow,newC1,newC2));
                
            }
        }
        
        return t[row][c1][c2]= cherry+ans;
        
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        memset(t,-1,sizeof(t));
        return solve(grid,0,0,m-1);
        
        
    }
};