//create  a stucture to store complex numbers(use arrow operator) 
#include<stdio.h>
struct complexNumber{
    int real;
    int imaginary;
};

int main(){
    struct complexNumber x1={2,3};//real=2,imaginary is 3
    
    struct complexNumber *ptr=&x1;
   
    printf("The real part is :%d\n",ptr->real);
    printf("The imaginary part is :%d\n",ptr->imaginary);
    return 0;
}