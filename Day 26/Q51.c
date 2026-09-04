Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/



#include <stdio.h>
int main(){
    int n, i, s;

    printf("Enter lines: ");
    scanf("%d", &n);
    
    for(i=n; i>=1; i--){
        
        for(s=1; s<=i-1; s++){
            printf(" ");   
        }
        
        for(s=i; s<=n; s++){
            printf("%d", s);
        }
        printf("\n");
    }
    return 0;
}