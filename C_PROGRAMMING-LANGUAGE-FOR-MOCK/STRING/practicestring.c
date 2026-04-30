// #include<stdio.h>
// void printString(char arr[]);
// int main(){
//     char firstname[]="papiya";
//     char lastname[]="dutta";
//     printString(firstname);
//     printString(lastname);
//     return 0;

// }
// void printString(char arr[]){
//     for(int i=0;arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }

// format specifier
// #include<stdio.h>
// int main(){
//     // take user string
//     char name[50];

//     scanf("%s",name);
//     printf(" your name is :%s",n
//     ame);
//     return 0;

// }
// ask the user to enter their firstname and print it back to them
#include<stdio.h>
int main(){
    char firstname[80];
    printf(" enter your first name :");
    scanf("%s",firstname);
    printf("your firstname is:%s",firstname);
    return 0;
}