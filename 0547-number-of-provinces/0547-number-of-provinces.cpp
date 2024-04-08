class Solution {
public:
    unordered_map<int,bool> mp;
    void solve(int j,vector<vector<int>>& isConnected){
        mp[j]=true;
        if(j>isConnected.size()-1) return;
        for(int i=0;i<isConnected[j].size();i++){
            if(isConnected[j][i]==1 && j!=i){
             
                
                isConnected[j][i]=-1;
                solve(i,isConnected);
                
            }
        }
        
        return;
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        
        for(int i=0;i<isConnected.size();i++){
            
            if(mp[i]==true) continue;
            for(int j=0;j<isConnected[0].size();j++){
                if(isConnected[i][j]==1 && i!=j){
                    isConnected[i][j]=-1;
                    mp[i]=true;
                    solve(j,isConnected);
                    ans++;
                    
                    
                    
                } 
            }
            
            if(mp[i]==false) ans++;
            
        }
        
        return ans;
        
    }
};