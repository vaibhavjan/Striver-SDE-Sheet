class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k;
        if(n==0)
            return;
            for(int i=0;i<m;i++)
            {
                if(nums1[i]>nums2[0])
                {
                    swap(nums1[i],nums2[0]);
                }
                int first=nums2[0];
                for(k=1;k<n && nums2[k] < first;k++)
                {
                    nums2[k-1]=nums2[k];
                }
                nums2[k-1]=first;
            }
        int i=m;
       for(int j=0;j<n;j++)
       {
           nums1[i]=nums2[j];
           i++;
       }
    }
};