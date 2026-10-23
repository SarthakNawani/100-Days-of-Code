//Merge two sorted arrays into one sorted array.

#include <stdio.h>
int main() {
    int m;
    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    int n;
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0;
    int first = 1;
    while (i < m && j < n) {
        int x;
        if (nums1[i] <= nums2[j]) {
            x = nums1[i];
            i++;
        } else {
            x = nums2[j];
            j++;
        }
        if (first == 1) {
            printf("%d", x);
            first = 0;
        } else {
            printf(" %d", x);
        }
    }

    while (i < m) {
        if (first == 1) {
            printf("%d", nums1[i]);
            first = 0;
        } else {
            printf(" %d", nums1[i]);
        }
        i++;
    }

    while (j < n) {
        if (first == 1) {
            printf("%d", nums2[j]);
            first = 0;
        } else {
            printf(" %d", nums2[j]);
        }
        j++;
    }

    return 0;
}