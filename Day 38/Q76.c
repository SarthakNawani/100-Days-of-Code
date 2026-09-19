#Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix elements: ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int check = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                check = 0;
            }
        }
    }

    if (check == 1) {
        printf("Yes, This matrix is symmetric");
    } else {
        printf("Not symmetric");
    }

    return 0;
}