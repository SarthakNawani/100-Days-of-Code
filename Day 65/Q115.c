//Check if two strings are valid anagrams.

#include <stdio.h>
int main() {
    printf("Enter first string: ");

    char s[100];
    int n1 = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        s[n1] = ch;
        n1++;
        scanf("%c", &ch);
    }

    printf("Enter second string: ");

    char t[100];
    int n2 = 0;
    scanf("%c", &ch);
    while (ch != '\n') {
        t[n2] = ch;
        n2++;
        scanf("%c", &ch);
    }

    int count[26] = {0};

    for (int i = 0; i < n1; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < n2; i++) {
        count[t[i] - 'a']--;
    }

    int flag = 1;
    if (n1 != n2) {
        flag = 0;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            flag = 0;
        }
    }

    if (flag == 1) {
        printf("Anagram");
    } else {
        printf("Not Anagram");
    }

    return 0;
}