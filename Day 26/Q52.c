Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/



#include <stdio.h>

int main(){
    int i, j, k, m, n;
    printf("Enter the peak number of stars(odd): ");
    scanf("%d", &n);
    
    if(n%2==0){
        printf("Not odd number of stars!!");
    }
    else{
        for(i=1; i<=n; i=i+2){
            for(j=1; j<=i; j++){
                printf("*\n");
            }
            printf("\n");
        }
        for(k=n-2; k>=1; k=k-2){
            for(m=1; m<=k; m++){
                printf("*\n");
            }
            printf("\n");
        }
    }
    return 0;
}