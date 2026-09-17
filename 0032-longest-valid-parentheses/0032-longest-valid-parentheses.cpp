class Solution {
public:
    int longestValidParentheses(string s) {
        int i,item,top=0;
        int stk[1000001];
        int max=0;
        stk[0]=-1;
        for(i=0;i<s.size();i++)
        {
            item=s[i];

            if(item=='(')
            {
                stk[++top]=i;
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
};