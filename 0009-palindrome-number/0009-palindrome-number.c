bool isPalindrome(int x) {
    double result=0;
    int org=x;
    if(x<0)
    {
        return false;
    }

    while(x>0)
    {
        int digit=x%10;
        result=result*10+digit;
        x=x/10;
    }
    return org==result;
}