class Solution {
public:
    void solve(vector<int> &nums,int n,vector<vector<int>> &ans,int i,vector<int> &temp){
        if(i==n){
            ans.push_back(temp);
            // temp.clear();
            // temp.pop_back();
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,n,ans,i+1,temp);
        temp.pop_back();
        
        while(i+1<n && nums[i]==nums[i+1])
            i++;
        solve(nums,n,ans,i+1,temp);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          vector<vector<int>> ans;
            vector<int> temp;
        sort(nums.begin(), nums.end());
            solve(nums,nums.size(),ans,0,temp);
        return ans;
    }
};