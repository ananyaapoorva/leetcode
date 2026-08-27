class Solution {
public:
    int trap(vector<int>& height) {
        int totalAmt=0;
        int s=0,e=height.size()-1;
        int leftMax=height[0], rightMax=height[e];
        while(s<e){
            if(leftMax<rightMax){
                s++;
                leftMax=max(leftMax,height[s]);
                totalAmt+=leftMax-height[s];
            }
            else{
                e--;
                rightMax=max(rightMax,height[e]);
                totalAmt+=rightMax-height[e];
            }
            
        }
        return totalAmt;
    }
};