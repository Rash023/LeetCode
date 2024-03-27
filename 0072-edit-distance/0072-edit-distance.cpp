class Solution {
public:
    int dp[501][501];
    
    int minDistance(string word1, string word2) {
       
        
        if(word1.size()==0) return word2.size();
        
        if(word2.size()==0) return word1.size();
        if(word2.size()>word1.size()) swap(word1,word2);
        int n=word1.size();
        int m=word2.size();
        
        
        dp[0][0]=0;
        for(int i=1;i<word1.size()+1;i++){
            dp[i][0]=i;
            
            
        }
        
        for(int i=1;i<word2.size();i++){
            dp[0][i]=i;
        }
    
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(word1[i]==word2[j]){
                    dp[i+1][j+1]=min(dp[i][j],min(dp[i+1][j]+1,dp[i][j+1]+1));
                }
                else{
                    dp[i+1][j+1]=min(dp[i][j]+1,min(dp[i+1][j]+1,dp[i][j+1]+1));
                }
            }
        }
        return dp[n][m];
        
    }
};