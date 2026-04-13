// write a function that prints namaste if user is indian & bonjour if the user is french
// void printregion(char* user){
   
//     if(user=="Indian"){
//         printf("Namaste");
//     }
//     else if(user=="French"){
//         printf("Bonjour");
//     }
// }
// int main(){
//  char* user="French";
//  printregion(user); 
// }
// in onther way
// #include <stdio.h>
// void  PrintI(){
//     printf("Namaste");
// }
// void  PrintF(){
//     printf("Bonjour");
// }
// int main(){
//     char n;
//     printf("Enter any key for i & f:");
//     scanf("%c",&n);
//   if(n =='i'){
//     PrintI();
//   }
//   else if(n=='f'){
//    PrintF();
//   }

// }
// take two parameters and   make a function called 'sum'return their sum;
// #include<stdio.h>
// int sum(int a,int b){
//   int sum=a+b;
//   return sum;
// }
// int main(){
//   int a;
//   printf("Enter the value of a:\n");
//   scanf("%d",&a);
//   int b;
//   printf("Enter the value of b:\n");
//   scanf("%d",&b);
// int result=sum(a,b);
//  printf("The sum of %d and %d is:%d\n",a,b,result);
// }




// return the table of user taken integer number using function

// #include <stdio.h>
// void printTable(int a){
// for(int i=1;i<=10;i++){
//   int multiply=a*i;
//   printf("%d x %d is %d\n",a,i,multiply);
// }

// }
// int main(){
//   int a;
//   printf("Enter the number taken by the user:");
//   scanf("%d",&a);
//   printTable(a);
// }
// take an price by the user and then add the gst near about 18% and then
// retun the price also
// #include <stdio.h>
// void printPrice(float price){
  
//   price=price+(price*18/100);
//   printf("%.2f",price);
// }
// int main(){
//   float price;
//   printf("enter the price taken by the user:");
//   scanf("%f",&price);
//   printPrice(price);

// }

// make a power of any interfer taken by the user using in buit function

// #include<stdio.h>
// #include<math.h>
// void printPower(int a,int b){
//   int power=pow(a,b);
//   printf("%d",power);
// }
// int main(){
//   int a,b;
//   printf("Enter any number for base  and exponent:");
//   scanf("%d",&a);
//   scanf("%d",&b);
//   printPower(a,b);

// }

//write functions to calculate area of a square ,a circle and a rectangle
// #include<stdio.h>
// #include<math.h>
// // calculate the square
// void printS(int a){
//   int square=a*a;
//   printf("  for square %d\n",square);
// }
// // calculate the circle
// void printC(int a){
//   float circle=3.14*(a*a);
//   printf(" for circle %.2f\n",circle);
// }
// //  for calculating rectangle 
// void printR(int a,int b){
//   int rectangle=a*b;
//   printf(" for rectangle %d\n",rectangle);
// }
// int main(){
// int a,b;
// printf("enter any two number for calculating the square ,circle and also rectangle:");
// scanf("%d",&a);
// scanf("%d",&b);
// printS(a);
// printC(a);
// printR(a,b);
// }

// recursion
// print hello world for 10 time usng recursion
// #include<stdio.h>
// void printHello();
// int main(){
//   int count=10;
//   printHello(count);
// return 0;
// }
// void printHello(int count){
//   //base case
//   if(count==0){
//     return;
//   }
//  printf("Hello World\n");
//  printHello(count-1);
// }
// question no 30 
// sum of n natural number using recursion method in c programming language
// #include<stdio.h>
// int printNaturalNumber(int number ,int sum);
// int main(){
//   int number=1;
//   int sum=0;
//   int result=printNaturalNumber(number,sum);
//   printf(" sum is %d",result);
// return 0;
// }
// int printNaturalNumber(int number,int sum){
// //base case
// if(number>10){
//   return sum;
// }
//   sum= sum+number;
//    return printNaturalNumber(number+1,sum);
   
// }
// print the factorial of n natural numbers

// #include <stdio.h>
// int printFactorial(int n);
// int main(){
//   int n=12;
//  printf("factorial of %d is %d",n,printFactorial(n)); 
// return 0;
// }
// int printFactorial(int n){
//   //base case
//   if(n==0){
//     return 1;
//   }
//   return n*printFactorial(n-1);
// }

// write a function to  convert celsius to fahrenheit
// #include<stdio.h>
// float printctof(float celsius);
// int main(){
//   float celsius;
//   printf("Enter the celsius that will convert into fahrenheit:");
//   scanf("%f",&celsius);
//   printf("the fahrenheit temperature is %.2f",printctof(celsius));
//   return 0;
// }
// float printctof(float celsius){
//   //c/5=(f-32)/9;
//   // f=(9*c/5)+32;
//   float fahrenheit=(9*celsius/5)+32;
//   return fahrenheit;

// }
// write a function to calculate percentage of a student from marks in science .math and sanskrit

// #include<stdio.h>
// double printPercentage(int science, int math, int sanskrit);
// int main(){
//   int science=98;
//   int math=97;
//   int sanskrit=99;
//   printf("The Percentage of three subject are %f",printPercentage(science, math,sanskrit));
//   return 0;
// }
// double printPercentage(int science, int math, int sanskrit){
//   return ((science+math+sanskrit)/3);
// }//
//write a function to print n terms of the fibonacchi sequesnce//
// #include<stdio.h>
// int printFibonacchi(int a,int b,int n);
// int main(){
//   int a=0;
//   int b=1;
//   int n=10;
//   printFibonacchi(a,b, n);
//   return 0;
// }
// int printFibonacchi(int a,int b,int n){
//   int next;
//   for(int i=1;i<=n;i++){
//     printf("%d",a);
//     next=a+b;
//     a=b;
//     b=next;
//   }
// }
// using recurstion

#include<stdio.h>
int printfibonacchiSeq(int n);
int main(){

  int n=10;
  printf("%d",printfibonacchiSeq(n));
  return 0;

}
int printfibonacchiSeq(int n){
  //base case
  if(n==0){
return 0;
  }
  if(n==1){
    return 1;
  }
  return printfibonacchiSeq( n-1)+printfibonacchiSeq( n-2);
}