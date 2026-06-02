// 2numbers-a and b, are written in a file.write a program to replace them with their sum.
#include<stdio.h>
int main(){
    FILE *fptr=fopen("sum.txt","r");
    int a;
    fscanf(fptr,"%d ",&a);
    int b;
    fscanf(fptr,"%d ",&b);
    fclose(fptr);
     fptr=fopen("sum.txt","w");
    fprintf(fptr,"sum is :%d",a+b);
    fclose(fptr);
    return 0;
}
