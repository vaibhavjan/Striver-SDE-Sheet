class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans=max(ans,count);
                count=0;
            }
            else
                count++;
        }
        ans=max(ans,count);
        return ans;
    }
};