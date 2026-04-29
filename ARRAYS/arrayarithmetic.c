// //arrayArithmetic
// #include<stdio.h>

// int main(){
//     int age=22;
//     int *ptr=&age;
//     printf("%u\n",ptr);
//     ptr++;
//     printf("%u\n",ptr);
//     ptr--;
//     printf("%u\n",ptr);


//         return 0;
// }
// //for floating value
// #include<stdio.h>

// int main(){
//     float price=20.00;
//     float *ptr=&price;
//     printf("%u\n",ptr);
//     ptr++;
//     printf("%u\n",ptr);
//     ptr--;
//     printf("%u\n",ptr);


//         return 0;
// }
// // for character value
// #include<stdio.h>

// int main(){
//     char star='*';
//     char *ptr=&star;
//     printf("%u\n",ptr);
//     ptr++;
//     printf("%u\n",ptr);
//     ptr--;
//     printf("%u\n",ptr);


//         return 0;
// }
// we can aso sustract one pointer to anothr
#include<stdio.h>
int main(){
    int age=22;
    int _age=23;
    int *ptr=&age;
     printf("%u\n",ptr);
    int *_ptr=&_age;
   
      printf("%u\n",_ptr);
    printf("difference= %u\n",ptr-_ptr);
    _ptr=&age;
      printf("comparisons= %u\n",ptr==_ptr);
    return 0;
}

