#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Newtext.txt","w");
    if(fptr==NULL){
        printf("file doesnot exist\n");
    }
    else{
        fclose(fptr);
    }
    return 0;
}