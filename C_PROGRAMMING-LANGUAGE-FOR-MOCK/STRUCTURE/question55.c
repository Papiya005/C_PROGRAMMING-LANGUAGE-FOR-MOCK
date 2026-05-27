#include<stdio.h>
#include<string.h>
//write a program to store the data of 3 students
struct student{
    char name[100];
    int roll;
    float cgpa;


};
int main(){
    struct student s1,s2,s3;
    //first student
    strcpy(s1.name,"papiya");
    s1.roll=185;
    s1.cgpa=9.18;
    printf("\nStudent 1\n");
    printf("student name :%s\n",s1.name);
    printf("student roll :%d\n",s1.roll);
    printf("student cgpa :%.2f\n",s1.cgpa);
//second student
    strcpy(s2.name,"sourav");
    s2.roll=186;
    s2.cgpa=9.10;
    printf("\nStudent 2\n");
    printf("student name :%s\n",s2.name);
    printf("student roll :%d\n",s2.roll);
    printf("student cgpa :%.2f\n",s2.cgpa);
    //third student
    strcpy(s3.name,"priya");
    s3.roll=187;
    s3.cgpa=9.00;
    printf("\nStudent 3\n");
    printf("student name :%s\n",s3.name);
    printf("student roll :%d\n",s3.roll);
    printf("student cgpa :%.2f\n",s3.cgpa);
    return 0;
    
}