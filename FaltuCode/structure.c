#include <stdio.h>
#include <string.h>
int main(){
    // Structure is a collection of values of diggerent types
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };
    struct student s1;
    s1.roll =  123;
    s1.cgpa = 123.2;
    strcpy(s1.name , "Anshul");
     // or
    struct student s2 = {124,10.0,"Aryan"};
    
    
    
    printf("Student name = %s \n", s1.name);
    printf("Student roll no. = %d \n", s1.roll);
    printf("Student cgpa = %f \n", s1.cgpa);
    printf("Student name = %s \n", s2.name);
    printf("Student roll no. = %d \n", s2.roll);
    printf("Student cgpa = %f \n", s2.cgpa);
    
    //structures are stored in contigous memory location




    // Pointers to structure
    struct student *ptr = &s1;
    printf("Student roll no. through pointer  is %d\n",(*ptr).roll);
    //or ARROW OPERATOR
    printf("Student name through arrow operator is %s\n", ptr->name);



    return 0;}