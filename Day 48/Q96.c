//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
int main() {
    printf("Enter a sentence: ");

    char str[100];
    int n = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        str[n] = ch;
        n++;
        scanf("%c", &ch);
    }

    int start = 0;

    for (int i = 0; i <= n; i++) {
        if (i == n || str[i] == ' ') {
            int left = start, right = i - 1;
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = i + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%c", str[i]);
    }

    return 0;
}