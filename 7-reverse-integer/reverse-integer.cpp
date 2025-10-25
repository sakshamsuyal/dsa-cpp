class Solution {
public: 
//  sa

    int reverse(int x) {
        long re = 0;
        while(x!=0){
            int last = x%10;
            re = re*10 + last;
            x/= 10;

        }
         return (re < INT_MIN || re > INT_MAX) ? 0 : (int)re;
    }

};