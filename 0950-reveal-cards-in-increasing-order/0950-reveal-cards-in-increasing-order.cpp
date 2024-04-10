class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(begin(deck),end(deck));
        int n=deck.size();
        vector<int> ans(n,0);
        int i=0;
        bool skip=false;
        int j=0;
        
        while(i<n){
            if(ans[j]==0){
                if(skip==false){
                    ans[j]=deck[i++];
                }
                
                skip=!skip;
            }
            j=(j+1)%n;
           
            
        }
        
        return ans;
        
        
    }
};