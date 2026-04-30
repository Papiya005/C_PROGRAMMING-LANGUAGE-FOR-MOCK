#include<stdio.h>
// char* printHello(){
//     return "Hello!Papiya";
// }
// int main(){
//    char* indra=printHello();
//    printf("%s",indra);
// }
//first we have two function one is "hello"and seconf one is"good bye"



// void printHello(){
//     printf("Hello\n");
// }
// void printGoodBye(){
//     printf("GoodBye");
// }
// int main(){
// printHello();
// printGoodBye();
// }
// write a function that prints namaste if user is indian & bonjour if the user is french
void printregion(char* user){
   
    if(user=="Indian"){
        printf("Namaste");
    }
    else if(user=="French"){
        printf("Bonjour");
    }
}
int main(){
 char* user="French";
 printregion(user); 
}

