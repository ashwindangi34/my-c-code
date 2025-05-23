#include<stdio.h>
void main()
{
int n;
int i;
printf("enter the value of n\n");
scanf("%d",&n);
int count=0;
for(i=1;i<=n;i++)
{
 if(n % i==0)
 {
  count++;
  printf(" this is  factor %d\n",i);
 }
 }
 printf("total num of count %d\n",count);




}
