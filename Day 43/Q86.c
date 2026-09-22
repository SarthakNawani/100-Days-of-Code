//Check if a string is a palindrome.

#include <stdio.h>

int len(char s[]) {
    if (s[0] == '\0') {
        return 0;
    }
    return 1 + len(s + 1);
}

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);
    int n = len(s);
    int i = 0;
    int j = n - 1;
    int f = 1;
    while (i < j) {
        if (s[i] != s[j]) {
            f = 0;
            break;
        }
        i++;
        j--;
    }
    if (f == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}