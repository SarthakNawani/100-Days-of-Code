//Find the repeated element in an array in a single iteration.

#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int seen[1000] = {0};
    int ans = -1;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (seen[x] == 1 && ans == -1) {
            ans = x;
        }
        seen[x] = 1;
    }

    printf("%d", ans);

    return 0;
}