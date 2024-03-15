class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int cnt=0;
        vector<int> ans(nums.size(),0);
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                 prod*=nums[i];
            }
            else{
                cnt++;
                
            }
            
        }
        
        if(cnt==nums.size()){
          return ans;
        
        }
        
        
        for(int i=0;i<nums.size();i++){
            if(cnt>0 && nums[i]!=0 || cnt>1){
                continue;
            }
            else if(nums[i]==0 ){
                ans[i]=prod;
              
                
            }
            else{
                ans[i]=(prod/nums[i]);
            }
        }
        
        return ans;
        
        
        
    }
};