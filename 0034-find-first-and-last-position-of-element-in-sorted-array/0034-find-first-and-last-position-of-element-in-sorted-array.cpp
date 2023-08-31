class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> fans;
        
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
                
            }
        }
        
        if(ans.size()==0){
            fans.push_back(-1);
            fans.push_back(-1);
            
        }
        
        if(ans.size()==1){
            fans.push_back(ans[0]);
            fans.push_back(ans[0]);
            
        }
        if(ans.size()>1){
            fans.push_back(ans[0]);
            int index=ans[ans.size()-1];
            fans.push_back(index);
        }
        
        return fans;
    }
};