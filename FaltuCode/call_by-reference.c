#include <stdio.h>
int square(int *n)
{
    return *n=(*n)*(*n);
}
int main()
{
    int n=4;
    printf("The square of 4 is %d\n",square(&n));
    printf("The value of number is %d",n);
    return 0;
}