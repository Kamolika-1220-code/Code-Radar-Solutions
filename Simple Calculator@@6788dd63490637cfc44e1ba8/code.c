#include<stdio.h>
int main()
{
    int a,b,d;
    char c;
    scanf('+','-','*','/');
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    if(c=='+')
        d=a+b;
    else if(c=='-')
        d=a-b;
    else if(c=='*')
        d=a*b;
    else if(c=='/')
        d=a/b;
    printf("%d",d);
        
    return 0;
}