#include<stdio.h>
void main()
{
int no=24;
int yes=89;
int equle;
//bitwise AND &.......
equle=no&yes;
printf("%d & %d=%d\n",no,yes,equle);



//bitwise OR |.......
equle=no|yes;
printf("%d | %d=%d\n",no,yes,equle);



//bitwise XOR ^.......
equle=no^yes;
printf("%d ^ %d=%d\n",no,yes,equle);

//bitwise left shift <<.......
equle=no<<yes;
printf("%d << %d=%d\n",no,yes,equle);


//bitwise right shift >>.......
equle=no>>yes;
printf("%d >> %d=%d\n",no,yes,equle);

}
