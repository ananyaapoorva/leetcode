class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v1(n);
        vector<int>v2(n);
        for(int i=0;i<n;i++){
            v1[i]=nums[i];
        }    
        for(int i=n;i<2*n;i++){
            v2[i-n]=nums[i];
        }
        vector<int>ans(2*n);
        int idx=0, i=0;
        while(i<2*n){
            ans[i++]=v1[idx];
            ans[i++]=v2[idx++];
        }   
        return ans;
    }
};