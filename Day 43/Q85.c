//Reverse a string.

#include <stdio.h>

void reverse() {
    char ch;
    scanf("%c", &ch);
    if (ch == '\n') {
        return;
    }
    reverse();
    printf("%c", ch);
}

int main() {
    printf("Enter a string: ");
    reverse();
    return 0;
}