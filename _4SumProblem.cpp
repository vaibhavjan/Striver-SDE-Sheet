class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            long long  target1=nums[i];
            for(int j=i+1;j<n;j++){
                long long  target2=nums[j];
                int start=j+1;
                int end=n-1;
                while(start<end){
                    if( target1+target2+nums[end]+nums[start]< target)
                        start++;
                    else if(target1+target2+nums[end]+nums[start]>target)
                        end--;
                    else{
                        vector<int> temp;
                        temp.push_back(target1);
                        temp.push_back(target2);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        res.push_back(temp);
                        // break;
                         while (start < end && nums[start] == temp[2]) ++start;
                        while (start < end && nums[end] == temp[3]) --end;
                    }     
                }
                while(j + 1 < n && nums[j + 1] == nums[j])
                    ++j;
            }
            while (i + 1 < n && nums[i + 1] == nums[i])
                ++i;
        }
        // res.erase( unique( res.begin(), res.end() ), res.end() );
        return res;
    }
};