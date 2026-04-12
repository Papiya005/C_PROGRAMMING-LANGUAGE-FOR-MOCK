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
#include<stdio.h>
int sum(int a,int b){
  int sum=a+b;
  return sum;
}
int main(){
  int a;
  printf("Enter the value of a:\n");
  scanf("%d",&a);
  int b;
  printf("Enter the value of b:\n");
  scanf("%d",&b);
int result=sum(a,b);
 printf("The sum of %d and %d is:%d\n",a,b,result);
}





