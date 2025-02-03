#include <stdio.h>
int main() {
    double a;
    scanf("%ld",&a);
    if(a%4==0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");    
    return 0;
}