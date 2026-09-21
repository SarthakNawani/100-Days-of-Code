//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        printf("%c", ch);
        scanf("%c", &ch);
    }

    return 0;
}