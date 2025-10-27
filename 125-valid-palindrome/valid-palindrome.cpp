class Solution {
public:
    bool isPalindrome(string s) {
        string clean ="";
        for(char c:s){
            if(isalnum(c))
            clean += tolower(c);
        }
        int i = 0;
        int n = clean.size();
        while(i<n/2){
        if(clean[i]!=clean[n-i-1])
        return false;
        i++;
        }
      return true;
    }
     
};