#include <stdio.h>

void display(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[],int size, int index)
{
    if (index > size)
    {
        return -1;
    }
    for (int i=index; i <size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;

}


int main()
{
    int arr[100]={1,2,3,4,5,23,34,45,56};
    printf("Array before deletion: \n");
    display(arr,9);
    int result = indDeletion(arr,9,5);
    if (result == 1)
    {
        printf("Deletion successful, array after deletion: \n");
        display(arr, 8);
    }
    else
    printf("Deletion unsuccesfull.");
    return 0;
}
