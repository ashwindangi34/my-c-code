/* .write a program to take a inputof two num from user and add them....write a program to take a inputof two num from user and sub them....write a program to take a inputof two num from user and mul them...write a program to take a inputof two num from user and div them...write a program to take a inputof two num from user and rem....*/
#include<stdio.h>
void main()
{
//varibel dicler
int a;
int b;
int let;
printf("enter the value of a=");
scanf("\n %d",&a);

printf("\nenter the value of b=");
scanf(" %d",&b);
let=a+b;
printf("add of %d+%d=%d\n",a,b,let);

let=a-b;
printf("sub of %d-%d=%d\n",a,b,let);

let=a*b;
printf("mul of %d*%d=%d\n",a,b,let);

let=a/b;
printf("div of %d/%d=%d\n",a,b,let);

let=a/b;
printf("rem of %d/%d=%d\n",a,b,let);
}

