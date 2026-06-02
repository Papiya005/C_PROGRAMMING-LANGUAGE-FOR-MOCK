#include<stdio.h>
int main(){
  
    FILE *fptr;
    fptr=fopen("text.txt","r");
  printf("%c",fgetc(fptr));
   printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
     printf("%c",fgetc(fptr));
      printf("%c",fgetc(fptr));
  return 0;

}