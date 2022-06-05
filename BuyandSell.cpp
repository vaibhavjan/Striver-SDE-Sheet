class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int k=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            if(k>prices[i])
             k=prices[i];
            else
                ans=max(prices[i]-k,ans);
        }
        return ans;
    }
};