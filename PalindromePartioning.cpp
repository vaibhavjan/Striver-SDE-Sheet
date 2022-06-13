class Solution {
public:
    bool ispal(int start,int end,string s){
        while(start<=end){
            if(s[end]!=s[start]){
              return false;
            }
              --end;
                ++start;
        }
        return true;
    }
    void solve(int i,string s,vector<vector<string>> &ans,vector<string> &temp){
        if(i==s.length()){
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<s.length();++j){
            if(ispal(i,j,s)){
                temp.push_back(s.substr(i,j-i+1));
                solve(j+1,s,ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string >> ans;
        vector<string> temp;
        solve(0,s,ans,temp);
        return ans;
    }
};