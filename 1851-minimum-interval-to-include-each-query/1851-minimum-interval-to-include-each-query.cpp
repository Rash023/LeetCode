class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        sort(begin(intervals),end(intervals));
        vector<int> res(queries.size(),-1);
        
        vector<pair<int,int>> sorted_queries;
        
        for(int i=0;i<queries.size();i++){
            sorted_queries.push_back({queries[i],i});
            
        }
        
        sort(begin(sorted_queries),end(sorted_queries));
        
        using T=pair<int,int>;
        
        priority_queue<T,vector<T>,greater<T>> pq;
        
        int i=0;
        
        for(const auto &it:sorted_queries){
            int query=it.first;
            int idx=it.second;
            for(;i<intervals.size() && intervals[i][0]<=query;i++){
                pq.push({intervals[i][1]-intervals[i][0]+1,i});
                
            }
            
            while(!pq.empty() && intervals[pq.top().second][1]<query){
                pq.pop();
                
            }
            
            res[idx]=(!pq.empty()?pq.top().first:-1);
            
            
            
        }
        
        return res;
        
    }
};