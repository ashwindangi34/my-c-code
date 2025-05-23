#include<stdio.h>
void main()
{
  int a;
  int b;
  int c;
  printf("enter the value of a=");
  scanf(" %d",&a);
  
  printf("enter the value of b=");
  scanf(" %d",&b);
  
  printf("enter the value of c=");
  scanf(" %d",&c);
  
  
  if(a>b && a>c)
  {
  printf("a is greter ");
  
  } 
  else if (b>a && b>c)
  {
  printf("b is greter ");
  
  }
  else 
  {
  printf("c is greter ");
  }
 }
