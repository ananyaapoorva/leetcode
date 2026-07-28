class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>m;
        vector<int>ans;
        int r=grid.size(), c=grid[0].size();
        for(int i=1;i<=r*r;i++){
            m[i]=0;
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                m[grid[i][j]]++;
            }
        }

        for(int i=1;i<=r*r;i++){
            if(m[i]==2){
                ans.push_back(i);
            }
        }
        
        for(int i=1;i<=r*r;i++){
            if(m[i]==0){
                ans.push_back(i);
            }
        } 
        return ans; 
    }
};