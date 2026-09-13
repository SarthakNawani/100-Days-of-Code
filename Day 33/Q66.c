Q66: Insert an element in a sorted array at the appropriate position.


#include <stdio.h>
int main(){
    int n, i, element;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d numbers with spaces between them: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to insert: ");
    scanf("%d", &element);

    i = n - 1;

    while(i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
