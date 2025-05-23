#include<stdio.h>
void main()
{
int a=8,b=7,c=8;
int ans;
//logical and...
ans=(a<b) && (b>c);
printf("logical and\n");
printf("%d < %d && %d > %d= %d\n",a,b,b,c,ans);
// logical or...
ans=(a<b) || (b>c);
printf("logical or\n");
printf("%d < %d || %d > %d= %d\n",a,b,b,c,ans);

// logical not...
ans=!((a<b) || (b>c));
printf("logical not\n");
printf("!(%d < %d || %d > %d= %d) \n",a,b,b,c,ans);

}
