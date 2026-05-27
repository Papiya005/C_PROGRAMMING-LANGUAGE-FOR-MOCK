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
// #include<stdio.h>
// // declare the function prototype
// int printnameLength(char* name);
// int main(){
//     char name[100];
//     fgets(name,100,stdin);
//     int result=printnameLength(name);
//     printf("%d",result);

// }
// int printnameLength(char* name){
//     int count=0;
//     while(*name!='\0'&& *name!='\n'){
//         count++;
//         name++;
//     }
//     return count;
// }


// take an input from the user using %c
// #include<stdio.h>
// int main(){
//     char str[100];
//     char ch;
//     int i=0;
//     while(ch!='\n'){
//         scanf("%c",&ch);
//         str[i]=ch;
      
//         i++;
//     }
//     str[i]='\0';// \n replaces with null char

//     puts(str);
//     return 0;

// }

//salting techniques-salting is basically a process used to protecting the password
//find the salted form of a password entered by a user if the salt is "123" and added to the end
// #include<stdio.h>
// #include<string.h>
// //declare the function prototye
// void salting(char password[]);

// int main(){
// char password[100];
// scanf("%s",password);
// salting(password);
// return 0;
// }
// void salting(char password[]){
//     char salt[]="123";
//   char newpassword[200];
//   strcpy(newpassword,password);
//   strcat(newpassword,salt);
//   puts(newpassword);
// }

//write a function named slice ,which takes a string and returns a sliced string from index n to m
// #include<stdio.h>
// //declare the function prototype
// void slice(char string[],int n ,int m);
// int main(){
//     int n,m;
//     char string[100];
//     scanf("%s",string);
//     slice(string,3,6);
//     return 0;

// }
// void slice(char string[],int n ,int m){
//     char newstr[200];
//     int j=0;
//     for(int i=n;i<=m;i++){
//     newstr[j]=string[i];
//     j++;
//     }
//     newstr[j]='\0';
//     puts(newstr);
// }


// write a  function to count the occurances of vowels in a string
// #include<stdio.h>
// //declare the function prototype
// int showVowels(char vowels[]);
// int main(){
//     char vowels[100];
//     fgets(vowels,100,stdin);
// int count=showVowels(vowels);
// printf(" The occurances of given vowels is :%d",count);
//     return 0;
// }
// int showVowels(char vowels[]){
//     int count=0;
//     for(int i=0;vowels[i]!='\0';i++){
//    if(vowels[i]=='a'||vowels[i]=='e'||vowels[i]=='i'||vowels[i]=='o'||vowels[i]=='u'||vowels[i]=='A'||vowels[i]=='E'||vowels[i]=='I'||vowels[i]=='O'||vowels[i]=='U'){
//     count++;
//   }
//     }
//     return count;
// }

//practice question 54:check if a given character is prsent in a string or not
#include<stdio.h>
// declare the function prototype
void presentWord(char str[]);

int main(){
    char str[100];
    fgets(str,100,stdin);
    presentWord(str);
    return 0;
}
void presentWord(char str[]){
    int found=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='w'||str[i]=='W'){
           found=1;
           break;
        }
            }
            if(found==1){
                printf("the charater is present");
            }
            else{
                 printf("the charater is not present");
            }
}

