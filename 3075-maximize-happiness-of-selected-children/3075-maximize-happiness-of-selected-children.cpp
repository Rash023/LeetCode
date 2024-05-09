class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(begin(happiness),end(happiness));
        
        int n=happiness.size();
        int cnt=0;
        long long ans=0;
        
        for(int i=n-1;i>=0 && k>0;i--,k--){
            if(happiness[i]-cnt>0){
                ans+=happiness[i]-cnt;
                
                
                
            }
            
            cnt++;
            
            
            
        }
        
        return ans;
        
    }
};