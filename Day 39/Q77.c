//Check if the elements on the diagonal of a matrix are distinct

#include <stdio.h>

int main() {
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

    int check = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            if (i != j && a[i][i] == a[j][j]) {
                check = 0;
            }
        }
    }

    if (check == 1) {
        printf("Digonal elements are distinct.");
    } else {
        printf("Digonal elements are not distinct.");
    }

    return 0;
}