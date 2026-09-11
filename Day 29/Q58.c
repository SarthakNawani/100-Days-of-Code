Q58: Find the maximum and minimum element in an array.



#include <stdio.h>
int main() {
    int n, i, max, min;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Max = %d, Min = %d", max, min);

    return 0;
}
