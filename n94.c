//wap to print prime num1 to n term....?
#include<stdio.h>
void main()
{
   
   int num;
   printf("enter the value of num\n");
   scanf("%d",&num);//100
   int i;
   int n;
   for(n=1;n<=num;n++)
   {
      int count=0;
      for(i=2;i<n;i++)
      { 
         if(n%i==0)
         {
            count++;
            break;
         }
      }
      if(count==0)
      {
         printf("%d is prime \n ",n);
      }
   
   }
   
}
