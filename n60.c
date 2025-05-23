//wap to calculate the even number between 1 to n...
#include<stdio.h>
void main()
{
int n;
printf("enter the value of n=");
scanf("%d",&n);
int i; 
int sum=0;
for(i=0;i<=n;i++)
{ 

 if(i%2==0)
 {
  printf("%d is even\n",i); 
 }
 sum=sum+i;
 
}
printf("%d is sum of even number\n",sum);
}
