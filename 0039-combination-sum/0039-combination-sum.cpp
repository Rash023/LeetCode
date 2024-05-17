class Solution {
public:
    vector<vector<int>> ans;
    int n;
    void solve(int idx,vector<int>& candidates,int target,vector<int>&temp){
        if(target==0){
            ans.push_back(temp);
            return;
        } 
        
        for(int i=idx;i<n;i++){
            if(candidates[i]>target){
                break;
                
            }
            temp.push_back(candidates[i]);
            solve(i,candidates,target-candidates[i],temp);
            temp.pop_back();
            
        }
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(begin(candidates),end(candidates));
        n=candidates.size();
        vector<int> temp;
        solve(0,candidates,target,temp);
        return ans;
        
        
    }
};