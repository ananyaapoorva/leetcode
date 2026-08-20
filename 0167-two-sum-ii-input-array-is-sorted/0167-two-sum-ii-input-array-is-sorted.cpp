class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=numbers.size()-1;
        while(i<j){
            if(target==numbers[i]+numbers[j])
                break;
            if(target<numbers[i]+numbers[j])
                j--;
            if(target>numbers[i]+numbers[j])
                i++;
        }
        return{i+1,j+1};
    }
};