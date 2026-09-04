Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/




#include <stdio.h>

int main() {
    int n, st;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    st = n;
    for (int i = 1; i <= n; i++) {
        for (int j = st; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
        st--;
    }

    return 0;
}




