class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>freq(101,0);
        vector<int>ans(nums.size(),0);
        for(int i:nums){
            freq[i]++;
        }

        for(int i=1;i<freq.size();i++){
            freq[i]+=freq[i-1];
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans[i]=0;
            }
            else{
                ans[i]=freq[nums[i]-1];
            }
        }
        return ans;
    }
};