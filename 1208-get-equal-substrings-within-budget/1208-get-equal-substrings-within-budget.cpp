class Solution {
public:
    
    int equalSubstring(string s, string t, int maxCost) {
        int cost=0;
        int n=s.size();
        int i=0;
        int j=0;
        int maxLen=0;
        
        while(i<n){
            cost+=abs(s[i]-t[i]);

            while(cost>maxCost && j<n){
                cost-=abs(s[j]-t[j]);
                j++;
                
            }
            maxLen=max(maxLen,i-j+1);
            i++;
            
        }
        
        return maxLen;
        
    }
};