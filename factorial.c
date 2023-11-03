#include <stdio.h>
int fact(int n){
    if (n==1)
    {
        return 1;
    }
    else if (n==0)
    {
        // 
        // printf("You can't enter zero\n");
        return 0;
        
    }
    return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
 
    printf("The factorial of %d is %d ",n,fact(n));
    return 0;
}