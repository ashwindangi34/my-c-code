#include<stdio.h>
void main()
{
int nan;
printf("enter th value of nan=");
scanf("%d",&nan);

if((nan%5==0)&& (nan%11==0))
{
// block if...
printf("\nvalue is divisble 5 and 11");

}

else
{
printf("not divsble of 5 and 11");
}
}
