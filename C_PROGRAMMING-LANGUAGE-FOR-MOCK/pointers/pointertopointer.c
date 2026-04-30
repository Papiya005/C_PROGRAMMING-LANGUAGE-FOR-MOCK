// #include<stdio.h>
// int main(){
// float price=100.00;
// float *ptr=&price;
// float **pptr=&ptr;
// printf("%d\n",**pptr);
// return 0;
// }
// print the value of "i" from its pointers to pointer
#include<stdio.h>
int main(){
    int i=10;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",**pptr);
}