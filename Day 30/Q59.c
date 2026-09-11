Q59: Count even and odd numbers in an array.


#include <stdio.h>
int main() {
    int n, i, odd, even;

    printf("How many number you want to check? ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }

    odd = 0;
    even = 0;

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even = even + 1;
        } else {
            odd = odd + 1;
        }
    }

    printf("Even number count is %d\n", even);
    printf("Odd number count is %d\n", odd);

    return 0;
}
