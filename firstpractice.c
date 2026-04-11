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
#include <stdio.h>
void  PrintI(){
    printf("Namaste");
}
void  PrintF(){
    printf("Bonjour");
}
int main(){
    char n;
    printf("Enter any key for i & f:");
    scanf("%c",&n);
  if(n =='i'){
    PrintI();
  }
  else if(n=='f'){
   PrintF();
  }

}




