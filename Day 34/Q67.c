Q67: Insert an element in an array at a given position.



#include <stdio.h>

int main()
{
    int n, i, position, element;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d numbers with spaces between them: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position and number to insert: ");
    scanf("%d %d", &position, &element);

    for(i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
