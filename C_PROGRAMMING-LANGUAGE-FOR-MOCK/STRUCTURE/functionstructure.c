#include<stdio.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
//declare he function prototype
void studentinfo(struct student s1);


int main(){
    struct student s1={"papiya",185,9.18};
     studentinfo(s1);

    return 0;
}
void studentinfo(struct student s1){
    struct student *ptr =&s1;
    printf("student name :%s\n",ptr->name);
     printf("student roll :%d\n",ptr->roll);
      printf("student cgpa :%.2f\n",ptr->cgpa);

}