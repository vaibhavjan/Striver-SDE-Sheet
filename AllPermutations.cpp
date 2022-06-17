class Solution {
public:
    void solve(vector<int> & nums,vector<int> & temp,vector<vector<int>> &ans,vector<bool> &frq){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(!frq[i]){
                temp.push_back(nums[i]);
                frq[i]=true;
                solve(nums,temp,ans,frq);
                temp.pop_back();
                frq[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> frq(nums.size(),false);
        solve(nums,temp,ans,frq);
        return ans;
    }
};