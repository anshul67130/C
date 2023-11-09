#include <stdio.h>
void main()
{

float p,r,t;
float SI;
printf("enter the value of principle,rate of interset,time: ");
scanf("%f%f%f",&p,&r,&t);
SI=p*r*t/100.0;
printf("\n the value of simple interest =%.2f",SI);
}
