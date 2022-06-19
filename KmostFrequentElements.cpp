class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp.insert({nums[i],mp[nums[i]]++});
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        map<int,int> :: iterator it;
        for(it=mp.begin();it!=mp.end();++it)
        {
            pq.push({mp[it->first],it->first});
        }
        for(int i=1;i<=k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};