// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {  
        int count=0;
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            count+=a[i];
            if(count==0)
            ans=i+1;
            else if(mp.find(count)!=mp.end()){
                ans=max(ans,i-mp[count]);
            }
            else{
                mp[count]=i;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends