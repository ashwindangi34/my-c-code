//wap to creat a new drive program
// user press s:-to calculate area of squre....
// user press r:- to calulate area of rectangle...
//user press t:-to calculate area of triangle....
// user press c:- to calulate area of circle...
#include<stdio.h>
void main()
{
char ch;

int len,bre,area,base,hight,side,radii;

const float pi = 3.14;

printf("press r to calculte area of rectangle=\n"); 
printf("press s to calculte area of squre=\n"); 
printf("press t to calculte area of tringle=\n"); 
printf("press c to calculte area of circle=\n");
scanf(" %c",&ch);

switch(ch)
{
case'r':
// area of retangle..
  printf("enter the length=" );
  scanf("%d",&len);

  printf("\n enter the breath=");
  scanf("%d",&bre);

  area=len*bre;
  printf("\n area of rectangle =%d\n",area);



case 's':
  //area of squre.....
  printf(" enter the side=");
  scanf("%d",&side);
  
  area=side*side;
  printf("\n area of squre=%d \n",area);

break;

case 't':

  //area of triangle...
 printf("enter the base=" );
  scanf("%d",&base);

  printf("\n enter the hight=");
  scanf("%d",&hight);

  area=hight*base;
  printf("\n area of tiangle =%d\n",area);
break ;

case 'c':
  // area of circle....
  printf(" enter the radii=");
  scanf("%d",&radii);
  
  area=pi*radii*radii;
  printf("\narea of circle=%d\n",area);
break;

default:

 printf("input is invalid \n");
 
break; 
}
 
}

