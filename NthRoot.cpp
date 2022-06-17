double mult(double mid,int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans*=mid;
    }
    return ans;
}
double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double low=1;
    double high=m;
    while((high-low)>0.000001){
        double mid=(high+low)/2.0;
        if(mult(mid,n)<m){
            low=mid;
        }
        else
            high=mid;
    }
    return low;
}
