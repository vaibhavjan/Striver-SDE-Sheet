class Solution {
public:
       int solve(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){
        if(i<0 or j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j])
            return dp[i][j]=1+solve(i-1,j-1,s1,s2,dp);
        return dp[i][j]= max(solve(i,j-1,s1,s2,dp),solve(i-1,j,s1,s2,dp));
    }
    int minInsertions(string s) {
        string s1=s;
        string s2=s;
        reverse(s2.begin(),s2.end());
        int l=s.length();
        vector<vector<int> > dp(l,vector<int>(l,-1));
        return l-solve(l-1,l-1,s1,s2,dp);
    }
};