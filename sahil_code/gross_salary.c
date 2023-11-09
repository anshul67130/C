#include <stdio.h>
void main()
{
   int bs,hra,da,gs;
   printf("enter the value of basic salary");
   scanf("%d",&bs);
   hra=bs*10/100;
   da=bs*50/100;
   gs=bs+hra+da;
   printf("\n gross salary of an empoloy is =%d",gs);
   
   }