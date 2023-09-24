class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> ans;
        
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            
        }
        
        int fcount=0;
        int val=0;
        for(auto it:ans){
            if(fcount<it.second){
                fcount=it.second;
                val=it.first;
            }
        }
        
        return val;
    }
};