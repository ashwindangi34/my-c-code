#include<stdio.h>
void main()
{
int maths;
int hindi; 
int english;
int sst;
int scince;
float avg;
printf("enter the value of maths\n=");
scanf ("%d",&maths);

 printf("enter the value of hindi=");
 scanf("%d",&hindi);
 
 printf("\nenter the value of english=");
 scanf("%d",&english);
 
printf("\nenter the value of sst=");
 scanf("%d",&sst);
 
 printf("\nenter the value of scince=");
 scanf("%d",&scince);
 
 // find the avg value of 5 sub.
 avg= (maths+hindi+english+sst+scince)/5;
 printf(" \n avg is :(%d+%d+%d+%d+%d)/5=%f ",maths,hindi,english,sst,scince,avg);
 
 
 }
