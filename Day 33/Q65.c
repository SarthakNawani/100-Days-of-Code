Q65: Search in a sorted array using binary search.


#include <stdio.h>
int main(){

    int n, i, target; 
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers with spaces between them: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int left = 0;
    int right = n - 1;
    int found = -1;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if(found == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", found);
    }

    return 0;
}
