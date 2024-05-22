class Solution {
public:
    vector<vector<int>> ans;
    int n;
    set<vector<int>>st;
    
    void solve(int idx,vector<int> &temp,vector<int> &nums){
        if(idx>=n){
            
            st.insert(temp);
            return;
        }
        
        solve(idx+1,temp,nums);
        temp.push_back(nums[idx]);
        solve(idx+1,temp,nums);
        temp.pop_back();
        
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        unordered_map<int,bool> mp;
        vector<int> temp;
        n=nums.size();
        sort(begin(nums),end(nums));
        solve(0,temp,nums);
        
        for(auto it:st){
            ans.push_back(it);
            
        }
        return ans;
        
        
    }
};