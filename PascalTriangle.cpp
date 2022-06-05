class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++)
        {
            vector<int> temp;
            for(int j=0;j<=i;j++)
            {
               if(i==j || j==0)
                   temp.push_back(1);
                else{
                    temp.push_back(res[i-1][j]+res[i-1][j-1]);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};