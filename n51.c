//wap to check wether month class on the basis of input numer 1 jan 2 feb......
#include<stdio.h>
void main()
{
int num;

printf("enter the value of number=");
scanf("%d",&num);

switch(num)
{      
 case 1:
 printf("january");
 break;
 
 case 2:
 printf("feb");
 break;
 
 case 3: 
 printf("march");
 break;

 case 4:
 printf("april");
 break;
 
 case 5:
 printf("may");
 break;
 
 case 6:
 printf("june");
 break;
 
 case 7:
 printf("july");
 break;
 
 case 8:
 printf("augest");
 break;
 
 case 9:
 printf("september");
 break;
 
 case 10:
 printf("october");
 break;
 
 case 11:
 printf("november");
 break;
 
 case 12:
 printf("december");
 break;
 
 default:
 printf("given input is invalid");
 break;

}


}
