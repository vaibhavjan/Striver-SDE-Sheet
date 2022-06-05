class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return;
        int i=1;
        int lst=-1;
        while(i<n)
        {
            if(nums[i]>nums[i-1])
                lst=i;
            i++;
        }
        if(lst==-1)
        {
            for(int i=0;i<n/2;i++)
                swap(nums[i],nums[n-i-1]);
            return ;
        }
        int m=nums[lst];
        int index=lst;
        for(int i=lst;i<n;i++)
        {
            if(nums[i]>nums[lst-1] && nums[i]<nums[index])
                index=i;
        }
        swap(nums[lst-1],nums[index]);
        sort(nums.begin()+lst,nums.end());
        
    }
};