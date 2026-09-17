int longestValidParentheses(char* s) {
    int i,item,top=0;
    int max=0;
    int stk[100001];
    stk[0]=-1;
    int n=strlen(s);
    for(i=0;i<n;i++)
    {
        item=s[i];
        
        if(item=='(')
        {
            top++;
            stk[top]=i;
        }
        else
        {
            top--;

            if(top<0)
            {
                top=0;
                stk[0]=i;
            }
            else
            {
                int len=i-stk[top];

                if(len>max)
                {
                    max=len;
                }
            }
        
        }

    }
    return max;
}