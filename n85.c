//wap to print the sum of n natural num for loop....?
#include<stdio.h>
void main()
{
int i=1;
int n;
int sum=0;
printf("enter the value natural num= ");
scanf("%d",&n);

do
{
sum=n+i;
i++;
}
while(i<=n);
printf("sum %d\n",sum);
printf(" this is that num which we are doing sum of natural num=%d",n);

}
