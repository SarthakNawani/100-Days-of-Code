//Find the maximum sum of a contiguous subarray using Kadane's algorithm.

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

    int cur = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (cur + arr[i] > arr[i]) {
            cur = cur + arr[i];
        } else {
            cur = arr[i];
        }
        if (cur > max) {
            max = cur;
        }
    }

    printf("%d", max);

    return 0;
}