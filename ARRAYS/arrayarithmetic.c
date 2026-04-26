//arrayArithmetic
#include<stdio.h>

int main(){
    int age=22;
    int *ptr=&age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);


        return 0;
}
//for floating value
#include<stdio.h>

int main(){
    int price=20.00;
    int *ptr=&price;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);


        return 0;
}
// for character value
#include<stdio.h>

int main(){
    char star='*';
    char *ptr=&star;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);


        return 0;
}