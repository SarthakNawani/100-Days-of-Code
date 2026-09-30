//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("Enter %d elements: ", n * m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int d = 0; d < n + m - 1; d++) {
        int temp[n + m];
        int count = 0;

        for (int i = 0; i < n; i++) {
            int j = d - i;
            if (j >= 0 && j < m) {
                temp[count] = a[i][j];
                count++;
            }
        }

        if (d % 2 == 0) {
            for (int k = count - 1; k >= 0; k--) {
                if (k == count - 1 && d == 0) {
                    printf("%d", temp[k]);
                } else {
                    printf(" %d", temp[k]);
                }
            }
        } else {
            for (int k = 0; k < count; k++) {
                printf(" %d", temp[k]);
            }
        }
    }

    return 0;
}