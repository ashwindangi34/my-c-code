/*
1
21
123
4321
12345

*/

#include<stdio.h>
void main()
{
int n;
printf("enter the value of n=");
scanf("%d",&n);
int i,j;
for(i=1;i<=n;i++)
{
 if(i%2==1)
 {
 for(j=1;j<=i;j++)
 // for odd num..?
 {
  printf("%d",j); 
 
 }
  }
 else 
 {
 for(j=i;j>=1;j--)
 // for even num...?
 {
  printf("%d",j);
 }
 }
 

printf("\n");
}
}
