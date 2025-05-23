//wap count num of digiets in a given no......?
#include<stdio.h>
void main()
{
int num;
printf("enter the value of num = ");
scanf("%d",&num);
int count=0;
while(num>0)
{
 num=num/10;
 count++;
 
}
printf(" total num of digits %d",count);

}
