//Count frequency of a given character in a string.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    char str[100];
    int count = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        str[count] = ch;
        count++;
        scanf("%c", &ch);
    }

    char target;
    printf("Enter a character to count: ");
    scanf(" %c", &target);

    int freq = 0;
    for (int i = 0; i < count; i++) {
        if (str[i] == target) {
            freq++;
        }
    }

    printf("%d", freq);

    return 0;
}