//Find the length of the longest substring without repeating characters.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    char str[100];
    int n = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        str[n] = ch;
        n++;
        scanf("%c", &ch);
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int rep = 0;
            for (int k = i; k < j; k++) {
                if (str[k] == str[j]) {
                    rep = 1;
                }
            }
            if (rep == 1) {
                break;
            }
            if (j - i + 1 > max) {
                max = j - i + 1;
            }
        }
    }

    printf("%d", max);

    return 0;
}