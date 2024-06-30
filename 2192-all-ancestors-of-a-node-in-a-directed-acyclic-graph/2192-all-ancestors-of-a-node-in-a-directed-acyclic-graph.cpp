class Solution {
public:
    void dfs(int ancestor,unordered_map<int,vector<int>>&adj,int currNode,vector<vector<int>>&res){
        for(int &it:adj[currNode]){
            if(res[it].empty() || res[it].back()!=ancestor){
                res[it].push_back(ancestor);
                dfs(ancestor,adj,it,res);
            }
        }   
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> res(n);
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
        }
        for(int i=0;i<n;i++){
            int ancestor=i;
            dfs(ancestor,adj,i,res);
        }
        return res;
    }
};