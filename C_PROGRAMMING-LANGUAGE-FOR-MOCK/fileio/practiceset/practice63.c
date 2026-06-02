//write a program to write all the odd numbers from i to n in a file
#include<stdio.h>
int main(){
    FILE *fptr=fopen("odd.txt","w");
    printf("Enter range(1 to n):");
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d ",i);
        }
    }
    fclose(fptr);
    return 0;
}