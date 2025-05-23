#include<stdio.h>
#include<math.h>
void main()
{
   int num;
   printf("enter the value of num=");
   scanf("%d",&num);
   int i;
   
   for(i=1;i<=num;i++)
   {
   int  count=0;
   int copy=i ;
   int sum=0;
   int rem;
   
   for(;copy>0;)
   {
   copy=copy/10;
   count++;
   }
   copy=i;
   for(;copy>0;)
   {
    rem=copy%10;
    sum=sum+pow(rem,count);
    copy=copy/10;   
}
if(i==sum)
{
printf("%d it is armstrong \n",i);   
}
}
}
