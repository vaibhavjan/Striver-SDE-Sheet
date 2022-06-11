class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>>s;
        
        for(int i = 0 ; i< nums.size() ;i++){
            
            int start = i+1 ;
            int end = nums.size()-1;
            
            
            while(start<end){
                
                int sum = nums[i] + nums[start] + nums[end];
                if(sum == 0){   
                    vector<int>temp(3,0);
                    temp[0] = nums[i];
                    temp[1] = nums[start];
                    temp[2] = nums[end];
                    if(s.find(temp) == s.end()){
                         v.push_back(temp);
                         s.insert(temp);
                    }
                    start++;
                    end--;
                    temp.clear();
                }
                else if(sum>0){
                    end--;
        
                }
                else{
                    start++;
                }
            }
            
        }
        return v;
    }
};