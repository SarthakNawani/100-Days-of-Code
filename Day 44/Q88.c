//Replace spaces with hyphens in a string.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        if (ch == ' ') {
            printf("-");
        } else {
            printf("%c", ch);
        }
        scanf("%c", &ch);
    }

    return 0;
}