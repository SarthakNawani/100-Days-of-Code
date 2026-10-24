//Find the missing number in an array of integers from 0 to n.

#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int total = 0;
    for (int i = 0; i <= n; i++) {
        total = total + i;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
    }

    printf("%d", total - sum);

    return 0;
}