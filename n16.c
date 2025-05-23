#include<stdio.h>
void main()
{
int p;
int r;
int t;
float si;

 printf("find a simple intrest:");
 
 printf("\nenter the value of p=");
 scanf("%d",&p);

  printf("\nenter the value of r=");
 scanf("%d",&r);
 
printf("\nenter the value of t=");
 scanf("%d",&t);
  
  si=p*r*t/100;
  printf("\ncalculate the si:%d*%d*%d/%d=%f",p,r,t,100,si);
}
