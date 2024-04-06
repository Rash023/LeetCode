class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> temp=nums;
        vector<int> ans;
        
        sort(begin(nums),end(nums),greater<int>());
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            
        }
        
        
        for(auto it:temp){
            if(mp[it]-->0){
                ans.push_back(it);
                
            }
            
        }
        
        return ans;
        
    }
};