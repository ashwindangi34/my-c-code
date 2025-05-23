#include<stdio.h>
void main()
{
int n;
int i=1;
printf("enter the value of n\n");
scanf("%d",&n);
int count=0;
while(i<=n)
{
 if(n % i==0)
 {
  count++;
  printf(" this is  factor %d\n",i);
 }
 i++;

 }
 printf("total num of count %d\n",count);
 }
