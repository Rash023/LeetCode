class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        int ans=0;
        int n=tickets.size();
        
        
        for(int i=0;i<n;i++){
            q.push({tickets[i],i});
            
            
        }
        
        while(!q.empty()){
            pair<int,int>temp=q.front();
            
            q.pop();
            ans++;
            
            if(temp.first==0){
                if(temp.second==k){
                    break;
                }
                else{
                    continue;
                    
                }
            }
            else{
              
                q.push({temp.first-1,temp.second});
                
            }
        }
        
        return ans-tickets.size();
        
        
        
    }
};