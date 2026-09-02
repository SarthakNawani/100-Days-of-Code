Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/



#include <stdio.h>
int main () {
 int n,a,s=0,f,i;
 printf("Enter the number ");
 scanf("%d",&n);
 int t=n;
 while(n!=0) {
  a=n%10;
  f=1;
  for(i=1;i<=a;i++) {
   f=f*i;
  }
  s=s+f;
  n=n/10;
 }
 if(s==t) {
  printf("Strong number");
 }
 else {
  printf("Not strong number");
 }
 return 0;
}
