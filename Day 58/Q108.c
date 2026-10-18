//Print the product of array except self.

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

    printf("[");
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                prod = prod * nums[j];
            }
        }
        if (i == 0) {
            printf("%d", prod);
        } else {
            printf(",%d", prod);
        }
    }
    printf("]");

    return 0;
}