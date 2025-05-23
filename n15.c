#include<stdio.h>
void main()
{float basic_salary;
 float bonus;
 float hra;
 float da;
 float pf;
 float gsalary;
 printf("input your basic_salary\n");
 scanf("%f",&basic_salary);
 
 bonus=(basic_salary*0.30);
 printf("\nbouns added :%g",bonus);
 
 hra=(basic_salary*0.15);
 printf("\nhouse rent allowance :%g",hra);
 
 da=(basic_salary*0.25);
 printf("\ndaily allowance :%g",da); 

pf=(basic_salary*0.12);
 printf("\nprovid fund deducted :%g",pf); 

gsalary =(basic_salary+bonus+hra+da)-pf;
printf("\nyour gsalary is -%g",gsalary);

}



 

