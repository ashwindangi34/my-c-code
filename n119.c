/*
0
12
345
6789
*/
#include<stdio.h>
void main()
{
int i,j,n,num;
printf("enter the value of n=");
scanf("%d",&n);
num=0;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",num);

num++;

}
printf("\n");

}

}
