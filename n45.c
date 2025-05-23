#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value of a,b,c=");
scanf("%d%d%d",&a,&b,&c);

if(a==b && b==c && c==a )
{
printf("you got equi tringle=" );
 
}
else if(a==b || b==c || a==c )
{
printf ("\n you got isolse tringle =");

}
else if(a!=b && b!=c && c!=a)
{
printf("\n you got scalan tringle=");
}
 
}
 

