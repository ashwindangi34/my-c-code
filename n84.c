// wap to prinrt the table of n using for loop......
#include<stdio.h>
void main()
{
int i=1;
int n;
printf("enter the value of whose table you want to see=");
scanf("%d",&n);

do
{
 int ans=n*i;
 printf("%d * %d = %d\n",n,i,ans);
 i++;

}
while(i<=10);
printf("table of= %d",n);



}
