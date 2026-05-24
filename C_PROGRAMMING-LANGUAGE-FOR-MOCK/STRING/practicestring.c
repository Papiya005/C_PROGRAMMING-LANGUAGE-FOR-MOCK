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
// #include<stdio.h>
// int main(){
//     char firstname[80];
//     printf(" enter your first name :");
//     scanf("%s",firstname);
//     printf("your firstname is:%s",firstname);
//     return 0;
// }
//also try this with their fullname
// #include<stdio.h>
// int main(){
//     char fullname[79];
//     fgets(fullname,79,stdin);
//     puts(fullname);
//     // printf("enter your fullname:");
//     // scanf("%s",fullname);
//     // printf("your fullname is :%s",fullname);
//     return 0;
// }
// string using pointers
// #include<stdio.h>
// int main(){
//     char *canchange="hello world";
//     puts(canchange);
//     canchange="hello";
//     puts(canchange);
//     // if i use the array notation
//     // can not be reassigned 
//     char name[]="hello world";
//     puts(name);
//     name="world";
//     puts(name);
//     return 0;
// }


//49.make a program that inputs the user's name and prints its length
#include<stdio.h>
// declare the function prototype
int printnameLength(char* name);
int main(){
    char name[100];
    fgets(name,100,stdin);
    int result=printnameLength(name);
    printf("%d",result);

}
int printnameLength(char* name){
    int count=0;
    while(*name!='\0'&& *name!='\n'){
        count++;
        name++;
    }
    return count;
}
