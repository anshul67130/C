#include <stdio.h>

int len(char arr[]){
    int count=0;
    for (int i=0; arr[i]!= '\0'; i++)
    {
        count++;
    }
    return count-1;
}

int main(){
    char name[100];
    printf("Enter your name: ");
    fgets(name,100,stdin);
    printf("Your name has %d characters.",len(name));
}