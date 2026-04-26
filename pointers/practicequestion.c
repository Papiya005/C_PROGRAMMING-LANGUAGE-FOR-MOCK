//write a function to calculate the sum,product&average of 2 numbers.print that average in the main function.



// #include<stdio.h>
// void printAverage(int s,int p,int *sum,int *average,int *product);
// int main(){
//     int s=10;
//     int p=12;
//     int sum,product,average;

// printAverage(s,p,&sum,&average,&product);
//  printf("Sum = %d\n", sum);
//     printf("Product = %d\n", product);
//     printf("Average = %d\n", average);

//     return 0;
// }
// void printAverage(int s,int p,int *sum,int *average,int *product){
//      *sum=s+p;
//      *product=s*p;
//     *average=(s+p)/2;
//     printf("the average is :%d\n",*average);
// }


//write a program in c to find the maximumnumber between two numbers usingn a pointers
// #include<stdio.h>
// void printMax(int* a,int* b);
// int main(){
//     int a=10;
//     int b=19;
// printMax(&a,&b);
//   return 0;

// }
//  void printMax(int* a,int* b){
//     if(*a>*b){
//         printf("%d",*a);
//     }
//     else{
//         printf("%d",*b);
//     }
//  }
//write a program in c programming language to print the all elements in an array in reverse order...
// #include<stdio.h>
// void printElement(int arr[], int n);
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//      int n = sizeof(arr) / sizeof(arr[0]);
//     printElement(arr,n);
//     return 0;

// }
// void printElement(int arr[], int n){
//     for(int i=n-1;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
// }
//write a program in c to print all letters in english alphabet using a pointer
#include<stdio.h>
// declare the prototype first
void printAllLetters(char* a);
int main(){
    char a='A';
    printAllLetters( &a);
    return 0;

}
void printAllLetters(char* a){
    for(;*a<='Z';(*a)++){
printf("% c ",*a);
    }
}