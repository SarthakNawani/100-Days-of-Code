Q56: Read and print elements of a one-dimensional array.


#include <stdio.h>
int main() {
    int n, i;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
