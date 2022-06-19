#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int> &v,int n){
    int parent=(n-1)/2;
    if(v[parent]>0){
        if(v[n]>v[parent]){
            swap(v[n],v[parent]);
            heapify(v,parent);
        }
    }
}
void insert_node(vector<int> &v,int key){
    v.push_back(key);
    heapify(v,v.size()-1);
}
void print(vector<int>&v){
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
        cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    int key;
    cin >> key;
    insert_node(v,key);
    print(v);
    delete_node(v);
    print(v);
   return 0;
}