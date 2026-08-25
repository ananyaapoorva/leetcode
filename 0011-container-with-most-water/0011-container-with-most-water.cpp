class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=INT_MIN;
        int i=0, j=height.size()-1;
        while(i<j){
            int ht=min(height[i],height[j]);
            int capacity=(j-i)*ht;
            maxWater=max(capacity,maxWater);

            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxWater;
    }
};