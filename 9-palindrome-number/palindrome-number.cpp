class Solution {
public:
    bool isPalindrome(int x) {
        long rev= 0;
        int dup = x;
        if (x < 0) return false; 
        while(x!=0){
            int last = x%10;
            rev = rev*10 + last;
            x/=10;
        }
        if(rev==dup){
           return true;
        }else{
           return false;
        }
      
    }
 //saksha
};
    