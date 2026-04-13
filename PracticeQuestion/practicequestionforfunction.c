// write a function to find out the sum of digits of a number
// #include<stdio.h>
// int printSumOfDigits(int n);
// int main(){
//     int n;
//     printf("Enter any number :");
//     scanf("%d",&n);
//    printf("The sum of %d is: %d",n,printSumOfDigits( n));

// return 0;
// }
// int printSumOfDigits(int n){
//     int sum=0;
//     while(n>0){
//         sum=sum+n%10;
//         n=n/10;
//     }
//     return sum;
// }

//write a function to find the square root of a number

#include<stdio.h>
#include<math.h>
float printSqr(float n);
int main(){
float n;
printf("Enter any number for calculating the square root :");
scanf("%f",&n);
printf("The square root of %f is : %f ",n,printSqr(n));
    return 0;

}
float printSqr(float n){
   float result=sqrt(n); 
   return result;
}