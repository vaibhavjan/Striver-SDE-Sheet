#include <bits/stdc++.h> 
int subarraysXor(vector<int> &a, int x)
{
    int xo=0;
    long long ans=0;
    int n=a.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        xo=xo^a[i];
        if(xo==x)
            ans++;
        int temp=xo^x;
         if(mp.find(temp)!=mp.end())
            ans+=mp[temp];
            mp[xo]++;
    }
    return ans;
    //    Write your code here.
}