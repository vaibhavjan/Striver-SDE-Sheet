vector<int> Solution::solve(vector<int> &a, vector<int> &b, int k) {
    priority_queue<int> pq;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();++j){
            pq.push(a[i]+b[j]);
        }
    }
    vector<int> ans;
    for(int i=0;i<k;i++){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}