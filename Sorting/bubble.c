#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void * bubbleSort(int arr[],int size)
{
    
    for (int i = 0; i< size-1 ;i++)
    {
        for (int j= 0; j< size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
            printf("%d  ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr,size);
    printf("The sorted array is: \n");
    printArray(arr,size);
    return 0;
}