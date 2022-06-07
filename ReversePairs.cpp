
class Solution {
public:
    int merge(vector<int> & nums,int low,int mid,int high){
        int count=0;
        int j=mid+1;
        for(int i=low;i<mid+1;i++){
            while(j<=high and nums[i] > (2LL*nums[j])){
                j++;
            }
            count+=j-(mid+1);
        }
        int left=low,right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                ++right;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=high){
            temp.push_back(nums[right++]);
        }
        for(int i=low;i<=high;++i){
            nums[i]=temp[i-low];
        }
        return count;
    }
    int MergeSort(vector<int> & nums,int low,int high){
        int mid,count=0;
        if(low<high){
            mid=(high+low)/2;
            count+=MergeSort(nums,low,mid);
            count+=MergeSort(nums,mid+1,high);
            count+=merge(nums,low,mid,high);
        }
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return MergeSort(nums,0,nums.size()-1);
    }
};