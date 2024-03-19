class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
        
        for(int i=0;i<points.size();i++){
            int x=points[i][0]*points[i][0];
            int y=points[i][1]*points[i][1];
            
            pq.push({x+y,{points[i][0],points[i][1]}});
            
           
        }
         while(pq.size()>k){
                pq.pop();
            
            }
        
        
        
        vector<vector<int>> ans;
        
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
            
        }
        
        return ans;
        
    }
};