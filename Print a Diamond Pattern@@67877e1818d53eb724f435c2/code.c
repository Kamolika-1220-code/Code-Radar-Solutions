// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("");
//     scanf("%d",&n);
//     int nsp=n/2;
//     int nst=1;
//     int ml=n/2+1;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=nst;k++){
//             printf("*");
//         }
//         if (i<ml){
//             nsp--;
//             nst+=2;
//         }
//         else{
//             nsp++;
//             nst-=2;
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>

int main() {
    int n;
    // Add a prompt for user input
    printf(" ");
    scanf("%d", &n);

    // Check if 'n' is odd to proceed
    if (n % 2 == 0) {
        printf("");
        return 1; // Exit the program
    }

    int nsp = n / 2;  // Number of spaces
    int nst = 1;      // Number of stars
    int ml = n / 2 + 1; // Middle line of the diamond

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }
        if (i < ml) {
            nsp--;
            nst += 2;
        } else {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }
    return 0;
}