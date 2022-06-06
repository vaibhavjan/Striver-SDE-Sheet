#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
           unordered_map<int,int> mp;
        int m;
        for(int i=0;i<nums.size();i++)
        {
            mp.insert({nums[i],mp[nums[i]]++});
        }
        unordered_map<int,int> :: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(mp[it->first]>=2)
        {
            m=it->first;
            break;
        }      
    }
    int mx=nums[0]; 
    for(int i=1;i<nums.size();i++)
    {
        mx=max(mx,nums[i]);
    }
    int sum=(mx*(mx+1))/2;
    sum+=m;
    for(int i=0;i<nums.size();i++)
    {
        sum-=nums[i];
    }
    if(sum==0)
        sum=mx+1;
    return {sum,m};
}
