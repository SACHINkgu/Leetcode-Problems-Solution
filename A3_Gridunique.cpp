class Solution {
public:

    int solve(int n, int m, vector<vector<int>>&dp){

        if(m == 0 && n == 0) return 0;

        if(dp[n][m] != -1) return dp[n][m];

        int upperMove = 0 , leftMove = 0;
        if(m-1 > 0) leftMove = 1 + solve(n,m-1,dp);
        if(n-1 > 0) upperMove = 1 + solve(n-1,m,dp);

        return dp[n][m] = leftMove + upperMove;

    }

    int uniquePaths(int n, int m) {
        
        if(n == 1 || m == 1) return 1;
        vector<vector<int>>dp(n,vector<int>(m,-1));

        int uniPaths = solve(n-1,m-1,dp);

        return uniPaths+2;

    }
};