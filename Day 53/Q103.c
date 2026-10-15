//Find the leftmost pivot index of an array.

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
    for (int i = 0; i < n; i++) {
        total = total + nums[i];
    }

    int left = 0;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        int right = total - left - nums[i];
        if (left == right) {
            ans = i;
            break;
        }
        left = left + nums[i];
    }

    printf("%d", ans);

    return 0;
}