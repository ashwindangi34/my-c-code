/*
54321
4321
321
21
1
*/
#include<stdio.h>
void main()
{
int i,j,n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
 for(j=n;j>=i;j--)
 {
 printf("%d",j);
 }
 printf("\n");
 }
}
