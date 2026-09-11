Q61: Search for an element in an array using linear search.


#include <stdio.h>

int main() {
    int n, i, search, found = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            found = i;
            break;
        }
    }

    printf("%d", found);

    return 0;
}
