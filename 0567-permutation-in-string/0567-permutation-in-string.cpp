class Solution {
public:

    bool isFreqSame(vector<int>arr1,vector<int>arr2){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int>freq1(26,0);
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
        }

        int windSize=s1.size();
        for(int i=0;i<s2.size();i++){
            int windIdx=0, idx=i;
            vector<int>windFreq(26,0);
            while(windIdx<windSize && idx<s2.size()){
                windFreq[s2[idx]-'a']++;
                windIdx++;
                idx++;
            }
            if(isFreqSame(windFreq,freq1)){
                return true;
            }
        }
        return false;

    }
};