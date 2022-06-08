class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> d;
        for(int i=0;i<nums.size();i++)
            d.push_back(nums[i]);
        sort(nums.begin(),nums.end());
        int k=0;
        int l=nums.size()-1;
        vector<int> v,va;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[k]+nums[l])==target)
            {
                v.push_back(nums[k]);
                v.push_back(nums[l]);
                break;
            }
            else if((nums[k]+nums[l])>target)
                l--;
            else
                k++;      
        }
        int m;
        for(int i=0;i<d.size();i++)
        {
            if(v[0]==d[i])
            {
               
                va.push_back(i);
                m=i;
                break;
            }
                
        }
        for(int i=0;i<d.size();i++)
        {
            if(v[1]==d[i] && m!=i)
            {
               va.push_back(i);
                break;
            }
               
        }
        return va;
        
    }
};