// wap to print all armstrong number  1 to n...../
#include<stdio.h>
#include<math.h>
void main()
{  
   int num;
   printf("enter the value of num=");
   scanf("%d",&num);
   int copy=num;
   int count=0;
   int sum=0;
   int rem;
   
   for(;copy>0;)
   {
   copy=copy/10;
   count++;
   }
   copy=num;
   for(;copy>0;)
   {
    rem=copy%10;
    sum=sum+pow(rem,count);
    copy=copy/10;
   
   }
   if(num==sum)
   {
   printf("%d it is armstrong \n",num);
   
   }
   else
   {
   printf("%d it is not armstrong \n",num);
   }


}
