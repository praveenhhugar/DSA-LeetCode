class Solution {
public:
    bool isPalindrome(int x) {
        int i;
        int org=x;
        double result=0;

        while(x>0)
        {
            int digit=x%10;
            result=result*10+digit;
            x=x/10;
        }
        return org==result;
        if(x<0)
        
            return false;
    }
};