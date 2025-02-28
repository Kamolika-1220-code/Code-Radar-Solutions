#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf('+','-','*','/');
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(c=='+')
        d=a+b;
    printf("%d",d);
        
    return 0;
}