// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<pair<int,int>> v;
         int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(arr[i].profit,arr[i].dead));
        }
         
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        // for(int i=0;i<n;i++){
        //   cout << v[i].first << " " << v[i].second << endl;
        // }
        vector<int> temp(n+1,-1);
        for(int i=0;i<n;i++){
            for(int j=v[i].second;j>=1;j--){
                if(temp[j]==-1){
                    temp[j]=i;
                    count++;
                    sum+=v[i].first;
                        break;
                }
            }
        }
       
      
        vector<int> res(2,-1);
        res[0]=count;
        res[1]=sum;
        return res;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends