#include<stdio.h>
void main()
{
int sp;
int dis;
printf("enter the value of shopping price=");
scanf("%d",&sp);

if(sp>=10000)
{
dis=0.15*sp;
printf("you got the dicount of %d rs \n",dis);
sp=dis-sp;
printf("\n you got the final price %d ",sp);
}
else
{
dis=0.08*sp;
printf("you got the dicount of %d rs \n",dis);
sp=dis-sp;
printf("\n you got the final price %d ",sp);
}
}
