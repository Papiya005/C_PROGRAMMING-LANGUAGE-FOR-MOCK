// 61.make a program to read 5 intefers from a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if (fptr == NULL) {
    printf("File not found!");
    return 1;
}
    int i;
    fscanf(fptr,"%d",&i);
    printf("%d ",i);

    fscanf(fptr,"%d",&i);
    printf("%d ",i);

    fscanf(fptr,"%d",&i);
    printf("%d ",i);

    fscanf(fptr,"%d",&i);
    printf("%d ",i);

    fscanf(fptr,"%d",&i);
    printf("%d ",i);

    fclose(fptr);
    return 0;

}