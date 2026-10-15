//Find the pivot integer x for a given n.

#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int total = 0;
    for (int i = 1; i <= n; i++) {
        total = total + i;
    }

    int left = 0;
    int ans = -1;
    for (int x = 1; x <= n; x++) {
        left = left + x;
        int right = total - left + x;
        if (left == right) {
            ans = x;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}