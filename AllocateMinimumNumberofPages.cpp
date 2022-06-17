int ispossible(vector < int > & A, int pages, int students) {
  int cnt = 0;
  int sumAllocated = 0;
  for (int i = 0; i < A.size(); i++) {
    if (sumAllocated + A[i] > pages) {
      cnt++;
      sumAllocated = A[i];
      if (sumAllocated > pages) return false;
    } else {
      sumAllocated += A[i];
    }
  }
  if (cnt < students) return true;
  return false;
}

int Solution::books(vector<int> &a, int b) {
    if(b>a.size())
        return -1;
    int low=a[0];
    int high=a[0];
    for(int i=1;i<a.size();i++){
        high+=a[i];
        low=min(low,a[i]);
    }
    while(low<=high){
        int mid=(low+high) >> 1;
        if(ispossible(a,mid,b)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
