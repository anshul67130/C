#include <stdio.h>

void printstring(char arr[])
{
    for (int i=0; arr[i]!= '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}




int main(){

    char name[10]={'A','N','S','H','U','L','\0'};
    char name2[10]="Anshul";
    printstring(name);
    printstring(name2);
    





    //     gets,fgets and puts


    char str[20];
    char str2[20];

    gets(str); // gets is harmful so dont use it. instead use fgets
    puts(str);
    //fgets(str,n,file)   it stops when n-1 is entered
    fgets(str2,10,stdin);
    puts(str2);
    

    // if you define string using pointer, the string can be re-initialised
    // if you define string using array method, the string cannot be re-initialised
    
    
    return 0;}