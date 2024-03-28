class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxLen=0;
        
        unordered_map<int,int> mp;
        
        
        int n=nums.size();
        
        int i=0;
        int j=0;
        
        while(i<n){
            mp[nums[i]]++;
            
            while(mp[nums[i]]>k && j<n){
                mp[nums[j]]--;
                j++;
                
            }
     
            maxLen=max(maxLen,i-j+1);
            i++;
            
        }
        
        return maxLen;
        
    }
};