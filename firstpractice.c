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
#include<stdio.h>
int printNaturalNumber(int number ,int sum);
int main(){
  int number=1;
  int sum=0;
  int result=printNaturalNumber(number,sum);
  printf(" sum is %d",result);
return 0;
}
int printNaturalNumber(int number,int sum){
//base case
if(number>10){
  return sum;
}
  sum= sum+number;
   return printNaturalNumber(number+1,sum);
   
}