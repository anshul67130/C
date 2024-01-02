#include <stdio.h>
#include <string.h>     
typedef struct  student{
     char name[10];
     int roll;
     float cgpa;} stu ;
void printstruct(struct student s1);
int main(){
    stu s1;
    strcpy(s1.name,"Anshul");
    s1.roll = 88;
    s1.cgpa = 10.0;    
    printstruct(s1);  
    return 0;
}
void printstruct(struct student s1){
   
    printf("Student roll no. is %d\n",s1.roll);
    printf("Student name is %s\n",s1.name);
    printf("Student cgpa is %f\n ",s1.cgpa);
}





