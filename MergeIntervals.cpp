class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
      int m=intervals.size();
        int n=intervals[0].size();
        int start=intervals[0][0];
        int end=intervals[0][1];
        bool flag=true;
        vector<vector<int>> ans;
        for(int i=1;i<m;i++){
            if(end>=intervals[i][0]){
                if(intervals[i][1]>end)
                    end=intervals[i][1];
            }
            else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
         if(ans.size()==0 || end!=ans[ans.size()-1][1]){
            ans.push_back({start,end});
        }
        return ans;
    }
};