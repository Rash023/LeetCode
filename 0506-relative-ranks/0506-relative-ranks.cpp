class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> mp;
        int n=score.size();
        
        for(int i=0;i<n;i++){
            mp[score[i]]=i;
            
            
        }
        
        sort(begin(score),end(score));
        
        vector<string> ans(n);
        int cnt=1;
        
        for(int i=n-1;i>=0;i--){
            int idx=mp[score[i]];
            
            if(cnt==1){
                ans[idx]="Gold Medal";
                
            }
            else if(cnt==2){
                ans[idx]="Silver Medal";
                
            }
            else if(cnt==3){
                ans[idx]="Bronze Medal";
                
            }
            else{
                ans[idx]=to_string(cnt);
                
            }
            
            cnt++;
            
        }
        
        return ans;
        
        
        
    }
};