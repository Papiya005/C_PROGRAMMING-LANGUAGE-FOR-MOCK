// array of structure
#include<stdio.h>
#include<string.h>
//defined the structure
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student ECE[100];
    struct student COE[100];
    struct student IT[100];

     strcpy(ECE[0].name,"papiya");
    ECE[0].roll=182;
    ECE[0].cgpa=9.18;
     // print their value
     printf("\n First Student:\n");
     printf("Student's name is : %s\n",ECE[0].name);
      printf("Student's roll no is : %d\n",ECE[0].roll);
       printf("Student's cgpa is : %.2f\n",ECE[0].cgpa);
//second student
strcpy(COE[0].name,"sourav");
    COE[0].roll=181;
    COE[0].cgpa=9.10;
     // print their value
      printf("\n Second Student:\n");
     printf("Student's name is : %s\n",COE[0].name);
      printf("Student's roll no is : %d\n",COE[0].roll);
       printf("Student's cgpa is : %.2f\n",COE[0].cgpa);
//third student
     strcpy(IT[0].name,"priya");
    IT[0].roll=183;
    IT[0].cgpa=9.18;
     // print their value
      printf("\n Third Student:\n");
     printf("Student's name is : %s\n",IT[0].name);
      printf("Student's roll no is : %d\n",IT[0].roll);
       printf("Student's cgpa is : %.2f\n",IT[0].cgpa);

    return 0;
}