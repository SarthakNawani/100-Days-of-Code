//Q78: Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>

int main(){
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter %d matrix elements: ", r*c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if(i==j)
                sum = sum + a[i][j];
        }
    }
    printf("Sum of digonal elements of matrix is %d.", sum);

    return 0;
}