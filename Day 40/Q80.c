//Multiply two matrices.

#include <stdio.h>
int main() {
    int row1, col1;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);

    int mat1[row1][col1];
    printf("Enter %d elements: ", row1 * col1);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    int row2, col2;
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);

    int mat2[row2][col2];
    printf("Enter %d elements: ", row2 * col2);
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (col1 != row2) {
        printf("Multiplication not possible\n");
        return 0;
    }

    int result[row1][col2];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            int sum = 0;
            for (int k = 0; k < col1; k++) {
                sum = sum + mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }

    printf("Result:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            if (j == 0) {
                printf("%d", result[i][j]);
            } else {
                printf(" %d", result[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}