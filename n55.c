// wap to prinrt the table of n using for loop......
#include<stdio.h>
void main()
{
int i;
int n;
printf("enter the value of whose table you want to see=");
scanf("%d",&n);

for(i=1;i<=10;i++)
{
 int ans=n*i;
 printf("%d * %d = %d\n",n,i,ans);


}
printf("table of= %d",n);



}
