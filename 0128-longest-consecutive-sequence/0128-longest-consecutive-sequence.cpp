class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        unordered_map<int,int>m;
        int longest=0;
        for(int i:nums){
            if(!m[i]){
                m[i]=m[i-1]+m[i+1]+1;
                m[i-m[i-1]]=m[i];
                m[i+m[i+1]]=m[i];
                longest=max(m[i],longest);
            }
        }
        return longest;
    }
};