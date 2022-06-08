class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1)
            return 1;
        // int mn=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     mn=min(nums[i],mn);
        // }
        set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
         vector<int> v;
        int count=1;
        set<int>::iterator itr;
        for (itr = s.begin();itr != s.end(); itr++){
            v.push_back(*itr);
        }
        v.push_back(INT_MAX);
        int mx=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]+1==v[i+1])
                count++;
            else{
                mx=max(mx,count);
                count=1;
            }
        }
        return mx;
    }
};