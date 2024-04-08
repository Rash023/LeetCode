class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        unordered_map<int,int> mp;
        
        
        
        q.push(0);
        
        while(!q.empty()){
            int idx=q.front();
            q.pop();
            
            for(int i=0;i<rooms[idx].size();i++){
                int newIdx=rooms[idx][i];
                
                if(mp[newIdx]==false){
                    q.push(newIdx);
                    
                }
                
            }
            mp[idx]=true;
            
            
        }
        
        for(int i=0;i<rooms.size();i++){
            
            if(mp[i]==false) return false;
            
        }
        
        return true;
        
        
    }
};