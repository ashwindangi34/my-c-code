//fibonacci series....
#include<stdio.h>
void main()
{
int n;
printf("enter the num \n");
scanf("%d",&n);
int cur;
int i=1;
int p1=-1;
int p2=1;
while(i<=n)
{
 cur=p1+p2;
 printf(" %d\t",cur);
 
 p1=p2;
 p2=cur;
 i++;
}


}
