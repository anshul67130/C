#include <stdio.h>
void main()
{
    int n,sum=0,rem;
    printf("enter the number: ");
    scanf("%d",&n);
    while (n > 0){
        rem = n % 10;
        printf("Reminder = %d\n",rem);
        sum = sum + rem ;

        n = n/10;
        printf("New n=%d\n",n);
        
    }
        printf("the sum of two digits is=%d",sum);
}
