class Solution {
public:
    unordered_map<string,vector<pair<string,double>>> mp;
    
    void dfs(string src,string dest,unordered_set<string> &vis,double prod,double &ans){
        if(vis.find(src)!=vis.end()) return;
        
        vis.insert(src);
        if(src==dest){
            ans=prod;
            return;
            
            
        }
        
        for(auto &p:mp[src]){
            string v=p.first;
            double val=p.second;
            dfs(v,dest,vis,prod*val,ans);
            
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
       
        vector<double> res;
        for(int i=0;i<equations.size();i++){
            mp[equations[i][0]].push_back({equations[i][1],values[i]});
            mp[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
            
            
            
        }
        
        
        for(int i=0;i<queries.size();i++){
            string num=queries[i][0];
            string den=queries[i][1];
        
            double ans=-1.0;
            double prod=1.0;
            if(mp.find(num)!=mp.end()){
                unordered_set<string> vis;
                dfs(num,den,vis,prod,ans);
                
                
            }
            res.push_back(ans);
            
        }
        
        
        return res;
        
    }
};