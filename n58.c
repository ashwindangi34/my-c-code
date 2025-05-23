#include<stdio.h>
void main()
{
int n;
printf("enter the value of n=");
scanf("%d",&n);

int i;
for(i=1;i<=n;i++)
{
  if(i%2==0)
  {
   printf("%d is a even\n",i);  
  }
  else
  {
   printf("%d is odd \n",i);
  }
}



}
