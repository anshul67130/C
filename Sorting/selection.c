#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[],int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[],int size)
{
    int i,j,minInd;
    for (int i = 0; i<size-1; i++)
    {
        minInd = i;
        for (j = i+1; j<size; j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        if (minInd != i)
        {
            swap(&arr[i],&arr[minInd]);
        }
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    selectionSort(arr,size);
    printf("The sorted array is: \n");
    printArray(arr,size);
    return 0;
}