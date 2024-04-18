class Solution {
public:
vector<pair<int,int>> dirs = {{0,1},{1,0},{-1,0},{0,-1}};
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int perimeter = 0;
        for(int i=0; i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] == 1) {
                    dfs(grid,i,j,perimeter);
                    return perimeter;
                }
            }
        }
        return perimeter;
    }
    void dfs(vector<vector<int>>& grid,int i, int j,int &p) {
        int m = grid.size();
        int n = grid[0].size();
        grid[i][j] = 2;
      for(auto &dir: dirs) {
         int x = dir.first + i;
         int y = dir.second + j;

         if(x >=0 && x < m && y >=0 && y < n && grid[x][y] == 1) {
             dfs(grid,x,y,p);
         } else if( x < 0 || x >=m || y <0 || y >= n || grid[x][y] == 0){
            p++;
         }   
      }
    }
};