Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/



#include <stdio.h>
int main () {
 int n,i;
 float a,b,s=1;
 printf("Enter the number of terms ");
 scanf("%d",&n);

 for(i=1;i<n;i++) {
  a=2*i+1;
  b=2*i+2;
  s=s+a/b;
 }

 printf("Approximate sum: %f",s);
 return 0;
}
