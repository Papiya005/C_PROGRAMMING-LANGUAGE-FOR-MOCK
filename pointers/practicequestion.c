//write a function to calculate the sum,product&average of 2 numbers.print that average in the main function.



#include<stdio.h>
void printAverage(int s,int p,int *sum,int *average,int *product);
int main(){
    int s=10;
    int p=12;
    int sum,product,average;

printAverage(s,p,&sum,&average,&product);
 printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Average = %d\n", average);

    return 0;
}
void printAverage(int s,int p,int *sum,int *average,int *product){
     *sum=s+p;
     *product=s*p;
    *average=(*sum+*product)/2;
    printf("the average is :%d\n",*average);
}
