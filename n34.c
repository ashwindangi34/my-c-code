#include<stdio.h>
void main()
{ 
int sp;
int dis;
char gen;
printf("enter youir gender=");
scanf(" %c",&gen);
printf("\nenter the value of sp=");
scanf("%d",&sp);
if (gen=='F'||gen=='f')
{
printf("happy womens day=\n");
dis=0.15*sp;
printf("you get discoutv of -%d/-rs",dis);
sp=dis-sp;
printf("you got final price %d /-rs",dis);
}
else
{
dis=0.08*sp;
printf("you got discount of %d /rs",dis);
sp=dis-sp;
printf("you got final price-%d/-rs",dis);
}
}
