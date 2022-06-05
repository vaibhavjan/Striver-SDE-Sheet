class Solution {
public:
    void sortColors(vector<int>& nums) {
        int va[3];
        va[0]=0;
        va[1]=0;
        va[2]=0;
        for(int i=0;i<nums.size();i++)
        {
            va[nums[i]]++;
        }
        nums.clear();
       if(va[0]!=0)
       {
           for(int i=1;i<=va[0];i++)
           {
              nums.push_back(0); 
           }
       }
        if(va[1]!=0)
       {
           for(int i=1;i<=va[1];i++)
           {
              nums.push_back(1); 
           }
       }
        if(va[2]!=0)
       {
           for(int i=1;i<=va[2];i++)
           {
              nums.push_back(2); 
           }
       }
    }
};