#include<stdio.h>
void main()
{
int a=45;
int e=98;
int b=-a;//uniary minus
printf("value of b:%d\n",b);

//post increment....
int c=a++;
printf("value of c:%d\n",c);
printf("value of a:%d\n",a);

//pre increment...
int d= ++e;
printf("value of d:%d\n",d);
printf("value of e:%d\n",e);

}
