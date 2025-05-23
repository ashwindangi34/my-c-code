//fibonacci series....
#include<stdio.h>
void main()
{
int n;
printf("enter the num \n");
scanf("%d",&n);
int cur;
int i;
int p1=-1;
int p2=1;
for(i=1;i<=n;i++)
{
 cur=p1+p2;
 printf(" %d\t",cur);
 
 p1=p2;
 p2=cur;

}


}
