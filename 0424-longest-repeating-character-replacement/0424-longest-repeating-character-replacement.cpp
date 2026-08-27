class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest=0;
        unordered_set<char>uniqueChar(s.begin(),s.end());
        for(char c:uniqueChar){
            int l=0,count=0;
            for(int r=0;r<s.size();r++){
                if(s[r]==c){
                    count++;
                }
                while((r-l+1)-count>k){
                    if(s[l]==c){
                        count--;
                    }
                    l++;
                }
                longest=max(longest,r-l+1);
            }

        }
        return longest;
    }
};