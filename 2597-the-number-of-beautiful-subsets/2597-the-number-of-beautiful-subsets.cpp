class Solution {
public:
    int result=0;
    
    
    void solve(int idx,vector<int> &nums,int k,unordered_map<int,int> &mp){
        if(idx>=nums.size()){
            result++;
            return;
            
        }
        
        solve(idx+1,nums,k,mp);
        
        if(!mp[nums[idx]+k] && !mp[nums[idx]-k]){
            mp[nums[idx]]++;
            solve(idx+1,nums,k,mp);
            mp[nums[idx]]--;
            
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        solve(0,nums,k,mp);
        
        return result-1;
        
    }
};