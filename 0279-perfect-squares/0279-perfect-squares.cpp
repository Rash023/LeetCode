class Solution {
public:
    int perfSquareHelper(int n,vector<int>&dp){
        if(n==0) return 1;
        if(n<0) return 0;
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        
        
        int ans=INT_MAX;
        int i=1;
        int end=sqrt(n);
        while(i<=end){
            int perfsq=i*i;
            int noOfPerfSquare=1+perfSquareHelper(n-perfsq,dp);
            if(noOfPerfSquare<ans){
                ans=noOfPerfSquare;
            }
            ++i;
        }
        dp[n]=ans;
        return dp[n];
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return perfSquareHelper(n,dp)-1;
    }
};