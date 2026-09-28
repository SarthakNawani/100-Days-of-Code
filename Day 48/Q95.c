//Check if one string is a rotation of another.

#include <stdio.h>
int main() {
    printf("Enter first string: ");

    char arr1[100];
    int x = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        arr1[x] = ch;
        x++;
        scanf("%c", &ch);
    }
    printf("Enter second string: ");

    char arr2[100];
    int y = 0;
    scanf("%c", &ch);
    while (ch != '\n') {
        arr2[y] = ch;
        y++;
        scanf("%c", &ch);
    }

    int res = 0;

    if (x == y) {
        for (int p = 0; p < x; p++) {
            int ok = 1;
            for (int q = 0; q < x; q++) {
                if (arr1[(q + p) % x] != arr2[q]) {
                    ok = 0;
                }
            }
            if (ok == 1) {
                res = 1;
            }
            }
    }

    if (res == 1) {
        printf("Rotation");
    } else {
        printf("Not rotation");
    }

    return 0;
}
