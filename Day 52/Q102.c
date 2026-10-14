//Find the index of the ceil of x in a sorted array.

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

    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}