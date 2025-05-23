#include<stdio.h>
#include<math.h>
void main()
{
int num,i,rem,sum,count,copy;
printf("enter the value of num");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
 count=0;
 sum=0;
 copy=i;
 while(copy>0)
 {
 copy=copy/10;
 count++;
 
 
 }
 copy=i;
 while(copy>0)
 {
 rem=copy%10;
 sum=sum+pow(rem,count);
 copy=copy/10;
 }
 if(i==sum)
 {
 
 printf(" this is armstrong %d \n",i);
 
 
 }
}
}
