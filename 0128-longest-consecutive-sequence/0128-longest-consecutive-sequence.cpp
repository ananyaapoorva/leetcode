class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
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