class Solution {
public:
    
    
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(begin(happiness),end(happiness));
        
        int i=happiness.size()-1;
        long long ans=0;
        int cnt=0;
        
        while(i>=0 && k>0){
            if(happiness[i]-cnt>0){
                ans+=happiness[i]-cnt;
            }
            
            
            k--;
            cnt++;
            i--;
            
           
        
        }
        
        
        
        return ans;
        
    }
};