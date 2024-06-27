class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        map<int,int> mp;
        for(auto edge:edges){
            int v=edge[0];
            int u=edge[1];
            mp[v]++;
            mp[u]++;
        }
        for(auto it:mp){
            if(it.second==n) return it.first;
        }
        return 0;
    }
};