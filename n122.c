//pyramid pattern.....?
#include<stdio.h>
void main()
{
 int i,j,n;
 printf("enter the value of n=");
 scanf("%d",&n);
 
 for(i=n;i>=1;i--)
 {
  for(j=1;j<=n-i;j++)
  {
   printf("  ");
   
  }
  for(j=1;j<=2*i-1;j++)
  {
  printf(" *");
  
  
  }
 printf("\n");
 
 }

}


