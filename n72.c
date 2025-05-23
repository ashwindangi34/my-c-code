//wap to revers a num...
#include<stdio.h>
void main()
{
int num;
printf("enter the value of num = ");
scanf("%d",&num);
int rev=0;
int rem;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;

}
printf("this the revers of given number %d",rev);
}
