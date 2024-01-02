#include <stdio.h>

void display(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i=size-1; i>=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index]=element;
    return 1;

}


int main()
{
    int arr[100]={1,2,3,4,5,23,34,45,56};
    printf("Array before insertion: \n");
    display(arr,9);
    int result = indInsertion(arr,9,20,100,5);
    if (result == 1)
    {
        printf("Insertion successful array after insertion: \n");
        display(arr, 10);
    }
    else
    printf("Insertion unsuccesfull.");
    return 0;
}
