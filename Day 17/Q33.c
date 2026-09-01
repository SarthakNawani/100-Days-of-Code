Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/



#include <stdio.h>
int main() {
    int number, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    if (original == sum) {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }

    return 0;
}
