class Solution {
public:
    int dp[1001];
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(cost.size()==2){
            return min(cost[0],cost[1]);
            
        }
        
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i=2;i<cost.size();i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
            
        }
        dp[n]=min(dp[n-1],dp[n-2]);
        return dp[n];
        
    }
};