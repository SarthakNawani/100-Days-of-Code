Q63: Merge two arrays.


#include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Enter number of elements in array 1: ");
    scanf("%d", &n1);

    int a[n1];
    for(i = 0; i < n1; i++) {
        printf("Enter %d element of array 1: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in array 2: ");
    scanf("%d", &n2);

    int b[n2];
    int c[n1 + n2];
    for(i = 0; i < n2; i++) {
        printf("Enter %d element of array 2: ", i + 1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    for(i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    printf("Merged array: ");

    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
