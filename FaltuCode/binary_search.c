#include <stdio.h>
int binarysearch(int arr[], int low , int high, int target){
    if (high>=low){
        int mid=low+(high-low)/2;
        if (arr[mid]==target){
            return mid;
        }if (arr[mid] > target){
            return binarysearch(arr,low,mid-1,target);
        }else{
            return binarysearch(arr,mid+1,high,target);
        }
    }return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    int result=binarysearch(arr,0,n-1,target);
    (result==-1)?printf("Element not found\n"):printf("Element found at index %d \n",result);
    return 0;
}