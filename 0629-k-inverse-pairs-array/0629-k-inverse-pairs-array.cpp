class Solution {
public:
    int MOD=1e9+7;
    int t[1001][1001];
    
    int solve(int n,int k){
        if(n==0){
            return 0;
            
        }
        
     
        if(k==0){
            return 1; //the only solution is sorted array
        }
        
        if(t[n][k]!=-1){
            return t[n][k];
        }
        
        int result=0;
        
        
        for(int inv=0;inv<=min(n-1,k);inv++){
            result=((result%MOD)+ solve(n-1,k-inv)%MOD)%MOD;
            
        }
        return t[n][k]=result;
        
        
    }
    
    
    
    
    int kInversePairs(int n, int k) {
        memset(t,-1,sizeof(t));
        
        return solve(n,k);
        
    }
};