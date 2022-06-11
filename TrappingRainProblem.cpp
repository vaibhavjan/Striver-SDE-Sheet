class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left,right(height.size(),-1);
        left.push_back(height[0]);
        for(int i=1;i<height.size();i++){
            left.push_back(max(left[i-1],height[i]));
        }
        right[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            right[i]=max(height[i],right[i+1]);
        }
        int water=0;
        for(int i=0;i<height.size();i++){
            water+=(min(left[i],right[i]))-height[i];
        }
        return water;
    }
};