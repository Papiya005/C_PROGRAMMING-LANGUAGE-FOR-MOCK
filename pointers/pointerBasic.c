#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    // how to print the address using pointer variable and with the help of "Unsigned Integer"
    printf("%d\n",_age);
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%p\n",ptr);
    printf("%u\n",*ptr);
    // how to print the value using pointe variable.
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;

}