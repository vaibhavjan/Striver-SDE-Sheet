class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // if(nums1.size()>nums2.size()){
        //     return findMedianSortedArrays(nums2,nums1);
        // }
        vector<int> temp;
        if(nums1.size()>nums2.size()){
            temp=nums1;
            nums1=nums2;
            nums2=temp;
        }
        int m=nums1.size();
        int n=nums2.size();
        int l=0,h=m,mid=(m+n+1)/2;
        while(l<=h){
            int div1=(l+h)/2;
            int div2=mid-div1;
            int l1=(div1==0)?INT_MIN : nums1[div1-1];
            int l2=(div2==0)?INT_MIN : nums2[div2-1];
            int r1=(div1==m)?INT_MAX : nums1[div1];
            int r2=(div2==n)?INT_MAX : nums2[div2];
              if(r2>=l1 && r1>=l2){
            if((m+n)%2==0){
                double ans=(max(l1,l2)+min(r1,r2))/2.0;
                return ans;
            }
            else{
                double ans=max(l1,l2);
                return ans;
            }
        }
        else if(l1>r2)
            h=div1-1;
        else
            l=div1+1;
        }
      return 0.0;
    } 
};