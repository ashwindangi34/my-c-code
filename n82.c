//wap to check armstrong num or not...? 
#include<stdio.h>
#include<math.h>
void main()
{
int num;
printf("enter the value of num=");
scanf("%d",&num);
int copy=num;
int sum=0;
int rem;
int count=0;
while(copy>0)
{
 copy=copy/10;
 count++;
 
}
copy=num;
while(copy>0)
{
 rem=copy%10;
 sum=sum + pow(rem,count);
 copy=copy/10;
 }
 if(num==sum)
 {
  printf("this is armstrong %d",num);
  
 }
 else
 {
 printf("this is not armstrong %d",num);
}
}
