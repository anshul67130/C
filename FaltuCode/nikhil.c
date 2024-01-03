#include <stdio.h>
int main()
{
    int i,j,k,l;
    for (i =0; i<7; i++)
    {
        for (j=65; j<=71-i; j++)
        {
            if (j==71);
            else
            printf("%c",j);
        }
        for (k=1;k<=i*2-1;k++)
        {
            printf(" ");
        }
        for (l=71-i; l>=65; l--)
        {
            printf("%c",l);
        }
        printf("\n");
    }
}