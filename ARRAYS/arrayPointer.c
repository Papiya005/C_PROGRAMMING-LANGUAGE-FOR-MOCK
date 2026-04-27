//array is a pointer
// #include<stdio.h>
// //declare the prototype
// void printArrayElement(int arr[]);
// int main(){
//     int arr[5];
//     printArrayElement(arr);
   
//     return 0;

// }
// void printArrayElement(int arr[]){
//     //input
    
//     for(int i=0;i<5;i++){
//         printf("%d index :",i);
//         scanf("%d",&arr[i]);
//     }
//     //output
//     for(int i=0;i<5;i++){
//     printf("%d index: %d\n",i,arr[i]);
//     }
// }
// taking parameter inside an function

#include<stdio.h>
//prototype declare
void printElement(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
 printElement( arr, 6);
    return 0;
}
void printElement(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

}