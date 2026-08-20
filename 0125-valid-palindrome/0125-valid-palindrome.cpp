class Solution {
public:
    bool isPalindrome(string s) {
        // string s1="";
        // for(auto& c:s){
        //     if(isalnum(c))
        //         s1+=tolower(c);
        // }

        int i=0,j=s.size()-1;
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};