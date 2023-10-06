class Solution {
public:
    int countPrimes(int n) {
        if(n==0){
            return 0;
        }
        vector<bool> countPrimes(n,true);
        countPrimes[0]=countPrimes[1]=false;
        int ans=0;
        for(int i=2;i<n;i++){
            if(countPrimes[i]){
                ans++;
                int j=i*2;
                while(j<n){
                    countPrimes[j]=false;
                    j+=i;
                }
            }
            
        }
        
        return ans;
    }
};