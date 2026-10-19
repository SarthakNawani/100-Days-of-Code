//Find the maximum element in each subarray of size k.

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

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        if (i == 0) {
            printf("%d", max);
        } else {
            printf(" %d", max);
        }
    }

    return 0;
}