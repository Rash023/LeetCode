class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int> ans(n,0);
        
        queue<int> q;
        
        sort(begin(deck),end(deck));
        
        for(int i=0;i<n;i++){
            q.push(i);
            
        }
        
        int i=0;
        bool flag=false;
        while(!q.empty()){
            int idx=q.front();
            q.pop();
            
            if(flag==false){
                
                ans[idx]=deck[i++];
                
            }
            else{
                q.push(idx);
            }
            flag=!flag;
        }
        
        return ans;
        
    }
};