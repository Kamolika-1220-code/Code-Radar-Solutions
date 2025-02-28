#include<stdio.h>
int main()
{
    int a,b,c;
    c=('+','-','*','/');
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(c=='+')
        printf("%d",a+b);
    return 0;
}