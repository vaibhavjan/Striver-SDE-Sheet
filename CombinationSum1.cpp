class Solution {
public:
    void solve(vector<int> c,vector<vector<int>>& ans,int target,vector<int> t,int sum,int i){
        if(i>=c.size()){
            return;
        }
        sum+=c[i];             
        t.push_back(c[i]);
        
        if(sum==target){
            ans.push_back(t);
        }
        else if(sum<target){
            solve(c,ans,target,t,sum,i);
        }
        else{
            return;
        }
        sum-=c[i];            
        t.pop_back();         
        solve(c,ans,target,t,sum,i+1);       
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end()); 
        vector<vector<int>> ans;
        vector<int> t;
        int sum = 0;
        solve(candidates,ans,target,t,sum,0); 
        return ans;
    }
};