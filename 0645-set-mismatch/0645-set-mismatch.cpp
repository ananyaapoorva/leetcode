class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        int missing;
        for(int i=1;i<=nums.size();i++){
            if(m1.find(i)==m1.end()){
                missing=i;
                break;
            }
        }
        int duplicate;
        for(const auto&[num,count]:m1){
            if(count>1){
                duplicate=num;
                break;
            }
        }
        return {duplicate,missing};
    }
};