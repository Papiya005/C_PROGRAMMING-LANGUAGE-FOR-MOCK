#include<stdio.h>
#include<string.h>
// defined the user defined datatypes
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll=185;
    s1.cgpa=9.18;
    strcpy(s1.name,"papiya");
    printf("student roll no: %d\n",s1.roll);
 printf("student cgpa : %.2f\n",s1.cgpa);
  printf("student name: %s\n",s1.name);

    return 0;

}