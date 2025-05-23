/*
55555
4444
333
22
1
*/
#include<stdio.h>
void main()
{

 int i,j,n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 
 for(i=n;i>=1;i--)
 {
 for(j=1;j<=i;j++)
 {
 printf("%d",i);
 }
 printf("\n");
 }
}
