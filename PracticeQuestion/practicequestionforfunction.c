// write a function to find out the sum of digits of a number
#include<stdio.h>
int printSumOfDigits(int n);
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
   printf("The sum of %d is: %d",n,printSumOfDigits( n));

return 0;
}
int printSumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}