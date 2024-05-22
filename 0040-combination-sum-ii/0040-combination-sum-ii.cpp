class Solution {
public:
    set<vector<int>> st;
    int n;
    
    void solve(int idx,vector<int> &temp,vector<int> &candidates,int target){
        if(target==0){
            st.insert(temp);
            return;
            
        }
        
        
        for(int i=idx;i<n;i++){
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target){
                break;
            }
            
            temp.push_back(candidates[i]);
            solve(i+1,temp,candidates,target-candidates[i]);
            temp.pop_back();
            
        }
        
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(begin(candidates),end(candidates));
        vector<int> temp;
        n=candidates.size();
        
        
        vector<vector<int>> ans;
        
        
        solve(0,temp,candidates,target);
        
        for(auto it:st){
            ans.push_back(it);
            
        }
        return ans;
        
        
        
        
        
    }
};