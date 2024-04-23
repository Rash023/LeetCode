class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        map<int,vector<int>> adj;
        
        vector<int> indegree(n);
        
        
        for(auto &edge:edges){
            int v=edge[0];
            int u=edge[1];
            indegree[v]++;
            indegree[u]++;
            adj[v].push_back(u);
            adj[u].push_back(v);
            
        }        
        
        queue<int> q;
        
        for(int i=0;i<n;i++){
            if(indegree[i]==1) q.push(i);
            
        }
        
        
        while(n>2){
            int size=q.size();
            n-=size;
            while(size--){
                int front=q.front();
                q.pop();
                for(int v:adj[front]){
                    indegree[v]--;
                    if(indegree[v]==1) q.push(v);
                    
                }
                
                
            }
        }
        
        vector<int> result;
        
        while(!q.empty()){
            result.push_back(q.front());
            q.pop();
            
            
        }
        
        return result;
        
    }
};