//Toggle case of each character in a string.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        printf("%c", ch);
        scanf("%c", &ch);
    }

    return 0;
}