class Solution {
public:
    bool ispos(int n,vector<string> &temp,int i,int j){
        int r=i;
        int c=j;
            while(i>=0 && j>=0){
                if(temp[i][j]=='Q')
                    return false;
                --i;
                --j;
            }
        i=r;
        j=c;
            while(j>=0){
                if(temp[i][j]=='Q')
                    return false;
                --j;
            }
        j=c;
            while(i<n && j>=0){
                if(temp[i][j]=='Q')
                    return false;
                ++i;
                --j;
            }
        return true;
    }
    void solve(int j,int n,vector<string> & temp,vector<vector<string>> & ans){
        if(j==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(ispos(n,temp,i,j)){
                temp[i][j]='Q';
                solve(j+1,n,temp,ans);
                temp[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ans;
            vector<string> temp(n);
            string s(n,'.');
            for(int i=0;i<n;i++){
                temp[i]=s;
            }
        solve(0,n,temp,ans);
        return ans;
    }
};