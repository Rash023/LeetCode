class Solution {
public:
    int n;
    int sum=0;
    void solve(int idx,vector<int> &nums,int &tempSum){
        if(idx>=n){
            sum+=tempSum;
            return;
        } 
        
        solve(idx+1,nums,tempSum);
        tempSum^=nums[idx];
        solve(idx+1,nums,tempSum);
        
        
    }
    int subsetXORSum(vector<int>& nums) {
        n=nums.size();
        int tempSum=0;
        solve(0,nums,tempSum);
        
        return sum;
    }
};