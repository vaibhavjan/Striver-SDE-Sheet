class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int k=-1;
        bool va=false;
        if(target<matrix[0][0])
            return false;
    for(int i=0;i<m;i++)
    {
        if(target>=matrix[i][0] && matrix[i][n-1]>=target)
        {
              k=i;
            break;
        }
         
    }
        if(k==-1)
            return false;
        for(int i=0;i<n;i++)
        {
            if(matrix[k][i]==target)
            {
                va=true;
                break;
            }      
        }
        return va;
    }
};