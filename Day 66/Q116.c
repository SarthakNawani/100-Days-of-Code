//Find two indices whose elements add up to the target.

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

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int a = -1, b = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                a = i;
                b = j;
                break;
            }
        }
        if (a != -1) {
            break;
        }
    }

    printf("%d %d", a, b);

    return 0;
}