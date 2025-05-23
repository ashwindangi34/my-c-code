#include<stdio.h>
void main()
{
int bs;
float hra,da,bouns,pf,gs ;

printf("enter the value basic salary=");
scanf("%d",&bs);

if(bs<=10000)
{
 hra=bs*60/100;
 printf("you got final hra = %f\n",hra);
 da=bs*30/100;
 printf("you got final da= %f\n",da);
 bouns=bs*30/100;
 printf("you got final bouns = %f\n",bouns);
 pf=bs*12/100;
 printf("you got pf=%f\n", pf);
 gs=(bs+hra+da+bouns)-pf;
 printf("you got gross salry is %f\n",gs); 
}
if(bs>10000 && bs>50000) 
{
 hra=bs*50/100;
 printf("you got hra=%f\n",hra);
 da=bs*35/100;
 printf("you got da=%f\n",da);
 bouns=bs*30/100;
 printf("you got bouns =%f\n",bouns);
 pf=bs*10/100;
 
 printf("you got pf =%f\n",pf);
 gs=(bs+hra+da+bouns)-pf;
 printf("you got gross salary is %f\n",gs);
}
if(bs>30000 &&  bs>50000)
{
  hra=bs*50/100;
 printf("you got hra=%f\n",hra);
 da=bs*25/100;
 printf("you got da=%f\n",da);
 bouns=bs*20/100;
 printf("you got bouns =%f\n",bouns);
 pf=bs*8/100;
 
 printf("you got pf =%f\n",pf);
 gs=(bs+hra+da+bouns)-pf;
 printf("you got gross salary is %f\n",gs);
}

if(bs>50000 )
{
hra=bs*40/100;
 printf("you got hra=%f\n",hra);
 da=bs*20/100;
 printf("you got da=%f\n",da);
 bouns=bs*15/100;
 printf("you got bouns =%f\n",bouns);
 pf=bs*7/100;
 
 printf("you got pf =%f\n",pf);
 gs=(bs+hra+da+bouns)-pf;
 printf("you got gross salary is %f\n",gs);


} 
else {
 
printf("input is invalid");
}
}
