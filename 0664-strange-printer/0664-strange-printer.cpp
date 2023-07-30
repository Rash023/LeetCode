class Solution {
private:
    int dfs(const string& s, int l, int r, vector<vector<int>>& dp){

        if(l > r) return 0;
        if(l == r) return 1;

        if(dp[l][r] != -1) return dp[l][r];

        int res = 1 + dfs(s, l + 1, r, dp);
        for(int i = l + 1; i <= r; i ++)
            if(s[i] == s[l])
                res = min(res, dfs(s, l, i - 1, dp) + dfs(s, i + 1, r, dp));
        return dp[l][r] = res;
    }
public:
    int strangePrinter(string s) {
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), -1));
        return dfs(s, 0, s.size() - 1, dp);
    }
};