//Find the next greater element for each element of an array.

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int ans = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                ans = arr[j];
                break;
            }
        }
        if (i == 0) {
            printf("%d", ans);
        } else {
            printf(", %d", ans);
        }
    }

    return 0;
}
