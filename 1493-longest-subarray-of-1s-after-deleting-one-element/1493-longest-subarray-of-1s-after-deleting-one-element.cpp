class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        int maxLen=0;
        int cnt=0;
        
        
        
        while(i<n){
            
            if(nums[i]==0) cnt++;
            
            
            while(cnt>1){
                if(nums[j++]==0) cnt--;
                
            }
            maxLen=max(maxLen,i-j+1);
            i++;
            
        }
        
        
        
        return maxLen-1;
        
    }
};