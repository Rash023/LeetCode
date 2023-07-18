class Solution {
private:
    void solve(vector<int> nums,int index,vector<int> ans,vector<vector<int>>& output){
        if(index>=nums.size()){
            output.push_back(ans);
            return;
        }
        
        solve(nums,index+1,ans,output);
        int element=nums[index];
        ans.push_back(element);
        solve(nums,index+1,ans,output);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> ans;
        int index=0;
        solve(nums,index,ans,output);
        return output;
    }
};