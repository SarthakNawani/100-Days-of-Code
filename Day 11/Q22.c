Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/



#include <stdio.h>

int main() {
    float sp, cp;

    printf("Enter the CP and SP \n");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        printf("Profit %f%%", ((sp - cp) / cp) * 100);
    }
    else if (cp > sp) {
        printf("Loss %f%%", ((cp - sp) / cp) * 100);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
