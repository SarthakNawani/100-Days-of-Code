Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*



#include <stdio.h>

int main(){
    int i, j, n;
    printf("Enter max number of stars(odd): ");
    scanf("%d", &n);
    
    if(n%2 == 0){
        printf("Enter odd number of stars!!");
    }
    
    else{
        for(int i = 1; i<=n; i=i+2){
            for(int j = 1; j<= i; j++){
                printf("*");
            }
            printf("\n");
        }
        for(int i = n-2; i>=1; i=i-2){
            for(int j = 1; j<= i; j++){
                printf("*");
            }
            printf("\n");
        }
        
    }
    return 0;
}


