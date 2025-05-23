//pointer....?
#include<stdio.h>
void main()
{
 int x;
 printf("enter the value of x=");
 scanf("%d",&x);
 int *ptr=&x;
 int **pt=&ptr;
 printf("value of x :%d \n",x);
 printf("addres of x :%p\n",&x);
 
 printf("value of ptr:%p\n",ptr);
 printf("addres of ptr:%p\n",&ptr);
 
 // change the value of x with help of ptr...?(derefrence)
 
 printf("value of x with help of ptr : %d \n",*ptr);
 
 *ptr=20;
 
 printf("value of x %d\n",*ptr);
 // double pointer..?
 printf("value of pt:%p\n",pt);
 printf("addres of pt:%p\n",&pt);
 // change the value of ptr with help of pt...?
 printf("value of ptr with help of pt : %d \n",**pt);
 
 **pt=30;
  printf("value of x %d\n",**pt);
}
