class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],mp[nums[i]]++});
        }
         unordered_map<int,int> :: iterator it;
        int count=0,value=-1;
        for(it=mp.begin();it!=mp.end();++it){
            if(it->second>count){
                count=it->second;
                value=it->first;
            }
        }
        return value;
    }
};