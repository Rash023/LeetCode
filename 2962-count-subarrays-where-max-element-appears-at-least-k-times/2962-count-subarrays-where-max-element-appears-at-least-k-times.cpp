class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long cnt=0;
        int maxEle=*max_element(begin(nums),end(nums));
        int maxCount=0;
        
        
    
        
        int n=nums.size();
        
        int i=0;
        int j=0;
        
        while(i<n){
            if(nums[i]==maxEle) maxCount++;
            
            
            
            while(maxCount>=k && j<n){
                cnt+=n-i;
                if(nums[j]==maxEle) maxCount--;
                j++;
                
                
            }
     
            
            i++;
            
        }
        
        return cnt;
         
    }
};