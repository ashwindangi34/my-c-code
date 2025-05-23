#include<stdio.h>
void main()
{
int a=23;
int b=8;
int c;
int d=89;
int e=78;
int f;
int g=78;
int h=67;
int i;
printf("enter the value of c =");
c=a++ + ++b;
printf("%d",c);
printf("\nenter the value of f =");
d= ++e - --e - --d + d++;
printf("%d",f);
printf("\nenter the value of i=");
i=++g * --h - g++ / --g;
printf("%d",i);
}
