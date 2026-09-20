//Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    int count = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        count++;
        scanf("%c", &ch);
    }

    printf("Number of characters in string is %d", count);

    return 0;
}