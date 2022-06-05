class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int count=0,max=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            count+=nums[i];
            if(count>max)
                max=count;
            if(count<0)
                count=0;
        }
        if(max>0)
            return max;
        else
        {
            int k=INT_MIN;
            for(int i=0;i<n;i++)
            {
                if(nums[i]>k)
                {
                    k=nums[i];
                }
            }
            return k;
        }
    }
};