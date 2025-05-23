//wap to calculate sum of digits given no....
#include<stdio.h>
void main()
{
int num;
printf("enter the value of num = ");
scanf("%d",&num);
int sum=0;
int rem;
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("total sum of digits %d",sum);
}

