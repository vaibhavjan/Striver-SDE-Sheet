class Solution {
public:
    int route(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i==m-1 and j==n-1)
            return 1;
        if(i>=m or j>=n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=route(i+1,j,m,n,dp)+route(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        if(m==1 and n==1)
            return 1;
        route(0,0,m,n,dp);
        return dp[0][0];
    }
};