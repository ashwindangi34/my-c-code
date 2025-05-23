//a chasire has some amount of money (eg.rs 4526 write a program to calculate out how many curriens rs 1000,rs500,rs200,rs100,rs50,rs20,rs10,rs5,rs2,rs1...........
#include<stdio.h>
void main()
{    
    int money;
    printf("enter the amount\n");
    scanf("%d",&money);
    int notes;
    if(money>=1000)
    {
     
        notes=money/1000;
        printf("1000 notes=%d\n",notes);
        money= money-(notes*1000);

           
    }
    if(money>=500)
    {
     
        notes=money/500;
        printf("500 notes=%d\n",notes);
        money= money-(notes*500);

           
    }
if(money>=200)
    {
     
        notes=money/200;
        printf("200 notes=%d\n",notes);
        money= money-(notes*200);

           
    }
    if(money>=100)
    {
     
        notes=money/100;
        printf("100 notes=%d\n",notes);
        money= money-(notes*100);

           
    }
    if(money>=50)
    {
     
        notes=money/50;
        printf("50 notes=%d\n",notes);
        money= money-(notes*50);

           
    }
    if(money>=20)
    {
     
        notes=money/20;
        printf("20 notes=%d\n",notes);
        money= money-(notes*20);

           
    }
    if(money>=10)
    {
     
        notes=money/10;
        printf("10 notes=%d\n",notes);
        money= money-(notes*10);

           
    }
    if(money>=5)
    {
     
        notes=money/5;
        printf("5 notes=%d\n",notes);
        money= money-(notes*5);

           
    }
    if(money>=2)
    {
     
        notes=money/2;
        printf("2 notes=%d\n",notes);
        money= money-(notes*2);

           
    }
    if(money>=1)
    {
     
        notes=money/1;
        printf("1 notes=%d\n",notes);
        money= money-(notes*1);

           
    }


}

