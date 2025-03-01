#include<stdio.h>
int main() {
    char operator;
    int num1, num2, result;
    scanf(" %c", &operator);
    scanf("%d %d", &num1, &num2);
    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf(result);
            break;
        case '-':
            result = num1 - num2;
            printf( result);
            break;
        case '*':
            result = num1 * num2;
            printf( result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf(result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
        break;    
    }

    return 0;
}