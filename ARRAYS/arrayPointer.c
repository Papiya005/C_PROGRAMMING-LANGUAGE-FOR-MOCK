//array is a pointer
#include<stdio.h>
//declare the prototype
void printArrayElement(int arr[]);
int main(){
    int arr[5];
    printArrayElement(arr);
   
    return 0;

}
void printArrayElement(int arr[]){
    //input
    
    for(int i=0;i<5;i++){
        printf("%d index :",i);
        scanf("%d",&arr[i]);
    }
    //output
    for(int i=0;i<5;i++){
    printf("%d index: %d\n",i,arr[i]);
    }
}
