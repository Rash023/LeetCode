class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        int len=2*k+1;
        vector<int> res(n,-1);
        
        vector<long> preSum(n+1);
        
        if(n<len){
            return res;
        }
        
        
        
        for(int i=0;i<n;i++){
            preSum[i+1]=preSum[i]+nums[i];
            
        }
        
        for(int i=k;i+k<n;++i){
            res[i]=(preSum[i+k+1]-preSum[i-k])/len;
            
        }
        
        return res;
        
        
        
    }
};