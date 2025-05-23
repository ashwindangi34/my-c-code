//arthemetic progression....?
// 9, 99,999,9999,99999,.....n
#include<stdio.h>
void main()
{
int n;
int i=1;
printf("enter the value of n");
scanf("%d",&n);

int sum=0;
while(i<=n)
{
 sum=sum*10+9;
 printf("%d \t",sum);
 i++;
}
}
