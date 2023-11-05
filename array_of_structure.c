#include <stdio.h>
#include <string.h>
int main(){
    struct student{
        int roll;
        char name[100];
        float cgpa;
    };

    struct student cse[100];
    struct student ece[100];
    cse[0].roll=1;
    cse[0].cgpa=12.3;
    strcpy(cse[0].name, "Anshul");


    printf("The name of %d roll no. in cse is %s and his cgpa is %.1f",cse[0].roll,cse[0].name,cse[0].cgpa);   
    





return 0;}