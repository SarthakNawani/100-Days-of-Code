Q62: Reverse an array without taking extra space.


#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("Reversed array is: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}