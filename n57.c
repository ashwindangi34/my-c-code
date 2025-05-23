//wap to print the  n factorial num for loop....?
#include<stdio.h>
void main()
{
int i;
int n;
int fact=1;

printf("enter the value  factorial num= ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
   fact=fact*i;
}
printf("factorial  %d\n",fact);

printf(" this is that num which we are doing factorial num=%d",n);
}
