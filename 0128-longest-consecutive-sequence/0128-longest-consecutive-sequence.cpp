class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int lengthMax=0;
        for(int i:s){
            if(s.find(i-1)==s.end()){
                int len=1;
                while(s.find(i+len)!=s.end()){
                    len++;
                }
                lengthMax=max(len,lengthMax);
            }
        }
        return lengthMax;
    }
};