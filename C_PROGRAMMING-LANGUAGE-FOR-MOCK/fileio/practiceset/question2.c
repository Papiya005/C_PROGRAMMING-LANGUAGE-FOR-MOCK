//make a program to input student information from a user  and enter it to a file
#include<stdio.h>
int main(){
    FILE *fptr=fopen("studentinfo.txt","w");
    char name[100];
    int marks;
    float cgpa;
    printf("Enter student name:");
    scanf("%s",name);
    printf("enter student marks:");
    scanf("%d",&marks);
    printf("enter student cgpa:");
    scanf("%f",&cgpa);
    fprintf(fptr,"Student name :%s\n",name);
    fprintf(fptr,"Student marks :%d\n",marks);
    fprintf(fptr,"Student cgpa :%.2f\n",cgpa);
     fclose(fptr);
return 0;



}