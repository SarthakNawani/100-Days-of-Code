//Count spaces, digits, and special characters in a string.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    int spaces = 0, digits = 0, special = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            special++;
        }
        scanf("%c", &ch);
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}