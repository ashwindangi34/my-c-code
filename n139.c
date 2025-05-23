//a to z alphabet ...?
#include<stdio.h>
void main()
{
   char ch;
   int i,j;
   int n=10;
   
   printf("press any charter between 'A'to 'Z'- ");
   scanf(" %c",&ch);
   
   //to print pattern -A
   switch(ch)
   {
   case'A':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||i==n/2||j==1||j==n)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   
   // to print pattern b..?
   case'B':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||i==n/2||j==1||j==n||i==n)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   // to print pattern c..?
   case'C':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||j==1||i==n)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   // to print patter d..?
   case'D':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||i==n||j==1||j==n)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   // to print pattern E...?
   case'E':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||i==n/2||j==1||i==n)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   
   //to print pattern f..?
   case 'F':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||i==n/2||j==1)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   //to print pattern G...?
   case 'G':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||j==1||i==n||(i>=n/2&&j==n)||(i==n/2&&j>=n/2))
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   //to printf patter h..?
   case 'H':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==n/2||j==1||j==n)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
    // to print pattern I..?
    case'I':
    for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||j==n/2||i==n)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   
   // to print pattern j...?
   case'J':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==1||(i==n&&j<=n/2)||j==n/2||(i>=n/2&&j==1))
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   }
   printf("\n");
   }
   break;
   //to print pattern L...?
   case'L':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(i==n||j==1)
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   
  
   }
   printf("\n");
   }
   break;
   // to print pattern M....?
   case'M':
   for(i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if(j==1||(i==j&&i<=n/2)||j==n||(j==n-i&&i<=n/2))
   {
    printf("*");
    }
    
   else
   {
   printf(" ");
   }
   
   }
   printf("\n");
   }
   break;
   
   
}  
}   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

