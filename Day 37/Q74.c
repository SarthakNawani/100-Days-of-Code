//Q73: Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int sum[rows];

    printf("Enter %d elements: ", rows * cols);

    for (int i = 0; i < rows; i++) {
        sum[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum[i] += matrix[i][j];
        }
    }

    printf("Row sums: ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
