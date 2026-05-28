#include<stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"papiya",185,9.18};
    struct student *ptr=&s1;
    printf("student roll: %d\n",(*ptr).roll);
    printf("student name :%s\n",ptr->name);
    return 0;
    
}