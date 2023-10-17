class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>counter;
        int row=grid.size();
        int col=grid[0].size();
        int ans=0;
        
        for(vector<int> r:grid){
            counter[r]+=1;
        }
        
        for(int i=0;i<row;i++){
            vector<int> v={};
            for(int j=0;j<col;j++){
                v.push_back(grid[j][i]);
            }
            
            ans+=counter[v];
        }
        
        return ans;
    }
    
};