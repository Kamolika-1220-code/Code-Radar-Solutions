#include <stdio.h>
int main() 
{
    char a;
    scanf("%c",&a);
    if(a==A || a==z)
        printf("Uppercase");
    else
        printf("Lowercase");    
    return 0;
}