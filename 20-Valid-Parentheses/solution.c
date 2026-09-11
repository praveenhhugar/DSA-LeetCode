#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isvalid(char *str){
    int i;
    int top=-1;
    int stk[100001];

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            stk[++top]=str[i]; //push to stack
        }
        else
        {
            if(top==-1) //check id stack is empty

            {    return false;  }

            if(stk[top]=='(' && str[i]==')' ||  //comparing all opening brackets in stack with closing brackets in string
                stk[top]=='{' && str[i]=='}' ||
                stk[top]=='[' && str[i]==']')
                {
                    top--; //pop operation
                }
            else 
                return false;
        }
    }   return top==-1;
}