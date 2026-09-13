Q68: Delete an element from an array.


#include <stdio.h>

int main() {
    int n, i, p;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &p);

    for(i = p; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n = n - 1;

    printf("Array after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}