#include <stdio.h>
#include <string.h>
int main(){
    char name[100] = "anshul";
    printf("Enter your name: ");
    // fgets(name,100,stdin);
    int length = strlen(name);
    printf("your name has %d characters\n",length);

    char newname[100]="ANSHUL ";
    strcpy(name,newname);
    printf("Your new name is: ");
    puts(name);



    char lastname[100]="khandwal";
    strcat(name,lastname);
    printf("Your full name is: ");
    puts(name);


}