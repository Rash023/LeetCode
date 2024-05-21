class Solution {
public:
    vector<vector<int>> ans;
    int n;
    
    void solve(int idx,vector<int> &nums,vector<int> &temp){
        if(idx>=n){
            ans.push_back(temp);
            return;
        }
        
        solve(idx+1,nums,temp);
        temp.push_back(nums[idx]);
        solve(idx+1,nums,temp);
        temp.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<int> temp;
        
        solve(0,nums,temp);
        
        return ans;
        
    }
};