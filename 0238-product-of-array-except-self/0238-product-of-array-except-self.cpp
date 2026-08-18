class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pref(nums.size(),1);
        int prefix=1;
        for(int i=0;i<nums.size();i++){
            pref[i]=prefix;
            prefix=prefix*nums[i];
        }

        vector<int>suff(nums.size(),1);
        int suffix=1;
        for(int i=nums.size()-1;i>=0;i--){
            suff[i]=suffix;
            suffix=suffix*nums[i];
        }

        vector<int>prodExcSelf(nums.size(),1);

        for(int i=0;i<nums.size();i++){
            prodExcSelf[i]=pref[i]*suff[i];
        }

        return prodExcSelf;
    }
};