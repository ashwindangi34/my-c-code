#include<stdio.h>
void main()
{
int n;
int i;
printf("enter the value of n\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
 if(n % i==0)
 {
  printf("enter the factor %d\n",i);
 }

}
}
