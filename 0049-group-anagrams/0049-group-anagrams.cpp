class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<string>copy(strs.begin(),strs.end());
        for(int i=0;i<copy.size();i++){
            sort(copy[i].begin(),copy[i].end());
        }
        vector<bool>check(copy.size(),false);
        for(int i=0;i<copy.size();i++){
            if(check[i])
                continue;
            vector<string>v;
            v.push_back(strs[i]);
            for(int j=i+1;j<copy.size();j++){
                if(check[j])
                    continue;
                if(copy[i]==copy[j]){
                    v.push_back(strs[j]);
                    check[j]=true;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};