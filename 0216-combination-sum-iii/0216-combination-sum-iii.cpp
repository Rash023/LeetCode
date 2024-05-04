class Solution {
public:
void find_combination(int index,int k,int target,vector<vector<int>> &ans,vector<int> &ds){
   
        if (target==0 && ds.size()==k){
            ans.push_back(ds);
            return;
        }
        for(int i=index;i<=9;i++){
    
            ds.push_back(i);
            find_combination(i+1,k,target-i,ans,ds);
            ds.pop_back();
        }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        find_combination(1,k, n,ans,ds);
        return ans;
        
    }
};