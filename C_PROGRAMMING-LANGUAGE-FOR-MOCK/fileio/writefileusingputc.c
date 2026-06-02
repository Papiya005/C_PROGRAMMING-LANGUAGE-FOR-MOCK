#include<stdio.h>
int main(){
  
    FILE *fptr;
    fptr=fopen("text.txt","w");
    fputc('A',fptr);
     fputc('p',fptr);
      fputc('p',fptr);
       fputc('L',fptr);
        fputc('E',fptr);
        fclose(fptr);
  
  return 0;

}