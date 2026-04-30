//basic arrays

#include<stdio.h>
void printArrayElement(int marks[]);

int main(){
    int marks[3];
    printArrayElement(marks);
    printf("phy = %d\nchem = %d\nmath = %d\n", marks[0], marks[1], marks[2]);
    return 0;
}
void printArrayElement(int marks[]){
    scanf("%d",&marks[0]);
    // printf("%d\n", marks[0]);
    scanf("%d", &marks[1]);
    // printf("%d\n", marks[1]);
    scanf("%d", &marks[2]);
    // printf("%d\n", marks[2]);
}
