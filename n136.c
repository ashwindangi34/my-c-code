//  sastik pattern............?
#include<stdio.h>
void main()
{
   int i,j,n;
   printf("enter the value of n=");
   scanf("%d",&n); 
   
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==n/2||j==n/2||(i==1&&j>=n/2)||(i>=n&&j==n)||(j==n&&i>=n/2)||(i==n&&j<=n/2)||(i<n/2&&j==1)||(i==n/4&&j==n/4)||(i==n/4&&j==((n/2)+n/4))||(j==n/4&&i==((n/2)+n/4))||(j==((n/2)+n/4))&&i==((n/2)+n/4))
   {
    printf("*");
    
   }
   
   else
   {
   printf(" ");
    }
   }
      printf("\n");
   }
   
  } 
   
   
