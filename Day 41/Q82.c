//Print each character of a string on a new line.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        printf("%c\n", ch);
        scanf("%c", &ch);
    }

    return 0;
}