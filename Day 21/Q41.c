Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/



#include <stdio.h>
int main () {
 int n,a,b,c=1;
 printf("Enter the number ");
 scanf("%d",&n);
 a=n%10;
 while(n>=10) {
  n=n/10;
  c=c*10;
 }
 b=n;
 n=n*10;
 n=(n+a);
 n=(n-a+b);
 n=n-(b*c);
 n=n+(a*c);
 printf("The swapped number is %d",n);
 return 0;
}
	