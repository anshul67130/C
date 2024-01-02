#include <stdio.h>
int main()
{
    int table[2][10];
    for (int i=2; i<=3; i++)
    {
        for (int j=1; j<=10; j++)
        {
            table[i][j]=i*j;
        }
        
    }

    for (int i=2; i<=3; i++)
    {
        for (int j=1; j<=10; j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");    
    }


    return 0;
}