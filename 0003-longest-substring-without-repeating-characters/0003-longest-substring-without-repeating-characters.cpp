class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lenLongest=0;
        int l=0;
        unordered_set<char>charSet;
        for(int r=0;r<s.size();r++){
            while(charSet.find(s[r])!=charSet.end()){ //while not if because we need to keep removing elements from left until we no longer have duplicates
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            lenLongest=max(lenLongest,r-l+1);
        }
        return lenLongest;
    }
};