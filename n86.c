//wap to print the  n factorial num for loop....?
#include<stdio.h>
void main()
{
int i=1;
int n;
int fact=1;

printf("enter the value  factorial num= ");
scanf("%d",&n);

do
{
   fact=fact*i;
   i++;
}
while(i<=n);
printf("factorial  %d\n",fact);

printf(" this is that num which we are doing factorial num=%d",n);
}
