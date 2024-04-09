class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res=1;
        int n=nums.size();
        int j=0;
        int k=0;
        
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                j=i;
                
            }   
            if(nums[i]>=nums[i-1]){
                k=i;
                
            }
            
            res=max(res,max(i-j,i-k)+1);
            
            
        }
        
        return res;
        
    }
};