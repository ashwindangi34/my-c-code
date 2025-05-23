#include<stdio.h>
void main()
{
int num;
printf("enter the value of num=");
scanf("%d",&num);
int n;
int count;
for(n=1;n<=num;n++)
{
count=0;
for(int i=2;i<n;i++)
{
if(n%i==0)
{
count++;
break;

}

}
if(count==0)
{
printf("%d prime \n",n);
}

}


}
