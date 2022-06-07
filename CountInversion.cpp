#include <bits/stdc++.h> 

long long merge(long long *arr,long long *temp,long long left,long long mid,long long right){
    long long count=0;
    long long i=left,j=mid,k=left;
    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count+=(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(i=left;i<=right;i++)
        arr[i]=temp[i];
    return count;
}
long long mergesort(long long *arr,long long *temp,long long left,long long  right){
    long long mid,count=0;
    if(left<right)
    {
        mid=(left+right)/2;
        count+=mergesort(arr,temp,left,mid);
        count+=mergesort(arr,temp,mid+1,right);
        count+=merge(arr,temp,left,mid+1,right);
    }
    return count;
}

long long getInversions(long long *arr, long long n){
    // Write your code here.
    long long *temp=new long long(n+1);
     return mergesort(arr,temp,0,n-1);
}