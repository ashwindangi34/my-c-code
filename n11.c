#include<stdio.h>
void main()
{
int length;
int breath;
int area;
printf("find the area of rec=");
printf("\nenter the value of length=");
scanf("%d",&length);

printf("enter the value of breath=");
scanf("%d",&breath);

area=length*breath;
printf("enter the value of area:%d*%d=%d",length,breath,area);
}
