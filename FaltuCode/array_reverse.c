#include <stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int n=5;
printf("The original array is: ");
for (int i = 0; i<5;i++)
{
    printf("%d  ",arr[i]);
}

for (int i=0; i<2;i++)
{
    int firstval=arr[i];
    int secondval=arr[n-i-1];
    arr[i]=secondval;
    arr[n-i-1]=firstval;
}
printf("The reversed array is: ");
for (int i = 0; i<5;i++)
{
    printf("%d  ",arr[i]);
}
}