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

void insertionSort(int arr[], int size)
{
    for (int i =1; i<size; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            swap(&arr[j+1],&arr[j]);
            j--;
        }
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    printf("The sorted array is: \n");
    printArray(arr,size);
    return 0;
}