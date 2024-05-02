class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(begin(nums),end(nums));
        
        unordered_map<int,bool> neg;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg[abs(nums[i])]=true;    
            }
            else{
                break;
                
            }
            
            
        }
        int ans=-1;
        
        for(int i=nums.size()-1;i>=0;i--){
            if(neg.find(nums[i])!=neg.end() && nums[i]>0){
                ans=nums[i];
                break;
                
            }
        }
        
        return ans;
        
    }
};