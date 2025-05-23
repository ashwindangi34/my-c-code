//wap to print a armstrong num 1 to n............?
#include<stdio.h>
#include<math.h>
void main()
{
 int num,i,count,rem,sum,copy;
 printf("enter the value of num=");
 scanf("%d",&num);
 
 for(i=1;i<=num;i++)
 {
 count=0;
 copy=i;
 while(copy>0)
 {
 copy=copy/10;
 count++;
 
 } 
 copy=i;
 sum=0;
 while(copy>0)
 {
 rem=copy%10;
 sum=sum+pow(rem,count);
 copy=copy/10;
 
 }
 if(sum==i)
 {
  printf(" armstrong num is - %d\n ",i);
 }
 
 
 
 }



}
