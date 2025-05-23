//wap to check wether a given num is  prime or not....
#include<stdio.h>
void main()
{
int n;
int i=1;
printf("enter the value of n\n");
scanf("%d",&n);
int count=0;
for(i=1;i<=n;i++)
{
 if(n % i==0)
 {
  count++;
  printf("enter the factor %d\n",i);
  
 }
 
 }
if(count==2)
{
printf("%d is prime number\n",n);
}
else
{
printf("%d is composite number\n",n);
}
 }
 
