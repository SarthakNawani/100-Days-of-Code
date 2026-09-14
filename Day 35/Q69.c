// Q69: Find the second largest element in an array.


#include <stdio.h>
int main(){
    int n, i, largest, second;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter %d element ", i+1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for(i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    second = arr[0];
    for(i=0; i<n; i++){
        if(arr[i]>second && largest>arr[i]){
            second = arr[i];
        }
    }
    printf("Second largest is %d", second);

    return 0;
}