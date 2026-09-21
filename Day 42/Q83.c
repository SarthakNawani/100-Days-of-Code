//Count vowels and consonants in a string.

#include <stdio.h>
int main() {
    printf("Enter a string: ");

    int vowels = 0, consonants = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        scanf("%c", &ch);
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}