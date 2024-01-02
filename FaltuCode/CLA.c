#include <stdio.h>

int main(int argc ,char * argv[])
{
    printf("You entered %d arguements.\n",argc);
    for (int i = 0; i<argc; i++)
    {
        printf("%s\n",argv[i]);
    }
}