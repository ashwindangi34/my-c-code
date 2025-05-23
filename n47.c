//electricity bill.....
#include<stdio.h>
void main()
{
int unit;
printf("enter the unit =");
scanf("%d",&unit);

int charges;

if(unit<=50)
{
charges=unit*0.50;
printf("you got charges=%d\n",charges);
}
else if(unit>50 && unit<=150)
{
 charges=25;
 unit=unit-50;
 charges=charges+unit*0.75;
 printf("you got the charges=%d\n",charges);
}
else if(unit > 150  && unit<=250)
{
charges=25+75;
unit=unit-150;
 charges=charges+unit*1.20;
  printf("you got the charges=%d\n",charges);
 }
 
 else
 {
 charges=220;
 unit=unit-250;
 charges=charges+unit*1.75;
 printf("you got the charges=%d\n",charges);
}

}
