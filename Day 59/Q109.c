//Find the maximum sum of all subarrays of size k.

#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    int max = 0;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }
        if (i == 0 || sum > max) {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}