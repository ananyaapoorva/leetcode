class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(const auto& s:strs){
            vector<int>count(26,0);
            for(char c:s){
                count[c-'a']++;
            }
            string countS=to_string(count[0]);
            for(int i=1;i<26;i++){
                countS+=","+to_string(count[i]);
            }
            m[countS].push_back(s);
        }  
        vector<vector<string>>ans;
        for(const auto& p:m){
            ans.push_back(p.second);
        }   
        return ans;
    }
};