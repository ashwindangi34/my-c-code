#include<stdio.h>
void main()
{
int n;
int e;
int o;
int sumEven=0;
int sumOdd=0; 
printf("ener the value of n");
scanf("%d",&n);
for(e=0,o=0;e<=n,o<=n;e++,o++)
{
  if(e % 2==0)
  {
   printf("%d\n is even",e);
   sumEven +=e;
    
  }
  else
  {
 printf("%d \n is odd",o);
 sumOdd +=o;
  
  
  }
  }
  printf("the sum of all even number %d\n",sumEven);
  printf("the sum of all odd number %d\n",sumOdd);
  
}
