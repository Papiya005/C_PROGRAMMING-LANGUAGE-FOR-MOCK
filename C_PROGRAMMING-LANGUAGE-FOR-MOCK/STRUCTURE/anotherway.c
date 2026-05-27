#include<stdio.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"papiya",185,9.18};
    printf("student name is :%s",s1.name);
    return 0;
}