int smallerfunction(vector<int> &row,int mid){
    int l=0,h=row.size()-1;
    while(l<=h){
        int m=(l+h)/2;
        if(row[m]<=mid)
            l=m+1;
        else
            h=m-1;
    }
    return l;
}
int Solution::findMedian(vector<vector<int> > &a) {
    int m=a.size();
    int n=a[0].size();
    int low=1;
    int high=1e9;
    while(low<=high){
        int mid=(low+high)/2;
        int c=0;
        for(int i=0;i<m;i++){
            c+=smallerfunction(a[i],mid);
        }
        if(c<=(n*m)/2){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}