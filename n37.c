// check the whether a given charater is an   alphabet or not.....
#include<stdio.h>
void main()
{
char ch;
printf("enter the charater ch=");
scanf(" %c",&ch);

if(ch>='a'&& ch<='z'||ch>='A'&&ch<='Z')
{
printf("charater is alphabet ");

}
else
{
printf("charater is not alphabet");
}
}
