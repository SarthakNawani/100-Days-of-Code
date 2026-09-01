Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/



#include <stdio.h>
int main() {
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("Factorial is 1");
    }
    else {
        int i = n; 
        while (n != 1) {
            i = i * (n - 1);
            n = n - 1;
        }
        
        printf("Factorial is %d", i);
    }

    return 0;
}
