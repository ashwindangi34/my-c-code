//pattern...?
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
 for(j=1;j<=n;j++)
 // for odd num..?
 {
  printf("%d  ",j); 
 
 }
 }
 else
 {
 for(j=n;j>=1;j--)
 // for even num...?
 {
  printf("%d  ",j);
 }
 }
 

printf("\n");
}
}
