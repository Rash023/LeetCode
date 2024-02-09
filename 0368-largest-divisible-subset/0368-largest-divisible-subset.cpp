class Solution {
public:
    
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<int> dp(nums.size(),1);
        
        vector<int> prevIndex(nums.size(),-1);
        int maxLen=1;
        int last_chosen_index=0;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 ){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        prevIndex[i]=j;
                      
                    }
                    
                    if(dp[i]>maxLen){
                        maxLen=dp[i];
                        last_chosen_index=i;
                        
                    }
                }
            }
        }
        
        vector<int> result;
        
        while(last_chosen_index!=-1){
            result.push_back(nums[last_chosen_index]);
            last_chosen_index=prevIndex[last_chosen_index];
            
        }
        
        return result;
    }
};