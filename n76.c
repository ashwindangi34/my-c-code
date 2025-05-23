//wap to calculate the even number between 1 to n...
#include<stdio.h>
void main()
{
int n;
printf("enter the value of n=");
scanf("%d",&n);
int i=1; 
int sum=0;
while(i<=n)
{ 

 if(i%2!=0)
 {
  printf("%d is odd\n",i); 
 }
 sum=sum+i;
 i++;
}
printf("%d is sum of odd number\n",sum);
}
