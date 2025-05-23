// break----break statment will help to terminal the loop whenever the spcific condition is true?
#include<stdio.h>
void main()
{
int i;

for(i=1;i<=20;i++)
{
if(i==14)
{
printf("countinue the loop....\n");
break;

}
printf("value of i----> %d\n",i);
}
}
