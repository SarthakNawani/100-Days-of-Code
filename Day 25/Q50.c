Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/




#include <stdio.h>
int main(){
    int n, i, s, st;

    printf("Enter lines: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        
        for(s=1; s<=i-1; s++){
            printf(" ");   
        }
            
        for(st=n; st>=i; st--){
            printf("*");
        }
        printf("\n");
        
        
    }
    return 0;
}