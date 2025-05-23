//sapace pettern
#include<stdio.h>
void main()
{
 int i,j,n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 // code for printing sapace..?
 for(j=1;j<=n-i;j++)
 {
 printf(" ");
 }
 // code for printing stars..?
 
 for(j=1;j<=i;j++)
 {
 printf("*");
 }
 printf("\n");
 }
 }
