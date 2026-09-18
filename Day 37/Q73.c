// Q73: Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>
int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], rowSum[r];

    printf("Enter %d matrix elements: ", r * c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        rowSum[i] = 0;

        for (j = 0; j < c; j++) {
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row: ");

    for (i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}