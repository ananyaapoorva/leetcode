class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break; //all positive, cant sum to zero
            if(i>0 && nums[i]==nums[i-1]) continue; //skip duplicate; i>0 to avoid Out of Bounds

            int s=i+1,e=nums.size()-1; //s starts after i, e starts at last place
            while(s<e){ //classic 2 ptr
                int sum=nums[i]+nums[s]+nums[e];
                if(sum<0) s++;
                else if(sum>0) e--;
                else if(sum==0){
                    res.push_back({nums[i],nums[s],nums[e]});
                    s++;
                    e--;
                    while(s<e && nums[s]==nums[s-1]) s++;
                    while(s<e && nums[e]==nums[e+1]) e--;
                }
            }
        }
        return res;
    }
};