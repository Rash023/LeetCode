class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        
        vector<vector<int>> directions{{0,1},{0,-1},{1,0},{-1,0}};
        int tot=0,cnt=0;
        
        int n=grid.size();
        int m=grid[0].size();
        
        int mins=0;
        
        
        queue<pair<int,int>> q;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0) tot++;
                
                if(grid[i][j]==2){
                    q.push({i,j});
                    
                }
            }
        }
        
        
        
        while(!q.empty()){
            int N=q.size();
            cnt+=N;
            
            while(N--){
                //checking the element below
                pair<int,int> temp=q.front();
                int i=temp.first;
                int j=temp.second;
                
                q.pop();
                
                for(auto &dir:directions){
                    int new_i=i+dir[0];
                    int new_j=j+dir[1];
                    
                    if(new_i>=0 && new_i<n && new_j>=0 && new_j<m && grid[new_i][new_j]==1){
                        q.push({new_i,new_j});
                        grid[new_i][new_j]=2;
                        
                        
                    }
                }
                
            }
            
            if(!q.empty()) mins++;
            
            
        }
        
       
        
        return tot-cnt==0?mins:-1;
        
        
    }
};