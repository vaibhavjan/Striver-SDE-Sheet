class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int m;
        for(int i=0;i<nums.size();i++)
        {
            mp.insert({nums[i],mp[nums[i]]++});
        }
        map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(mp[it->first]>=2)
        {
            m=it->first;
            break;
        }      
    }
       return m;                                                             
    }    
};
