class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>v1={s.begin(),s.end()};
        vector<char>v2={t.begin(),t.end()};

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        if(v1==v2){
            return true;
        }
        return false;
    }
};