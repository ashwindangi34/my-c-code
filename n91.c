//wap to check no is plallindrome or not  ......
#include<stdio.h>
void main()
{
int num;
printf("enter the value of num = ");
scanf("%d",&num);
int rev=0;
int rem;
int copy=num;
do
{
rem=num%10;
rev=rev*10+rem;
num=num/10;


}while(num>0);

if(copy==rev)
{
printf("given value is palallindrome %d",copy);
}
else
{
printf("given num is not plallindrome %d",copy);
}
}



