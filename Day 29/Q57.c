Q57: Find the sum of array elements.


#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of elements in array: %d", sum);

    return 0;
}

