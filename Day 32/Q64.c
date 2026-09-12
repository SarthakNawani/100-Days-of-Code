Q64: Find the digit that occurs the most times in an integer number.



#include <stdio.h>

int main() {
    int n, t, d, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    int c[10];

    for(i = 0; i <= 9; i++) {
        c[i] = 0;
    }

    t = n;
    if(t < 0) {
        t = -t;
    }

    while(t > 0) {
        d = t % 10;
        c[d] = c[d] + 1;
        t = t / 10;
    }

    int maxCount = 0, maxDigit = 0;
    for(i = 0; i <= 9; i++) {
        if(c[i] > maxCount) {
            maxCount = c[i];
            maxDigit = i;
        }
    }

    printf("Most frequent digit in %d is %d", n, maxDigit);

    return 0;
}