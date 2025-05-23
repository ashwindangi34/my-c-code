#include<stdio.h>
void main()
{
int sp;
int dis;

printf("enter the shopping price=");
scanf("%d",&sp);

if(sp>=10000)
{
dis=0.10*sp;
printf("\nyou have got a discount of %d rupees",dis);
sp=sp-dis;
printf("\nfinal price is %d rupees",dis);

}
else
{
dis=0.10*sp;
printf("\nyou have got a discount of %d rupees",dis);
sp=sp-dis;
printf("\nfinal price is %d rupees",dis);
}
}
