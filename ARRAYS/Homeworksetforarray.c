
#include<stdio.h>
// int countofnumbers(int arr[],int x,int size);
// int findlargestElement(int arr[],int largest,int size);
 void inserElement(int arr[],int size,int element);
int main(){
    // int arr[]={1,2,3,4,2,4,2,4,2,3,2,2,2,2,2};
    // int size=15;
    // int x=2;
    // int result=countofnumbers(arr,x,size);
    // printf("%d",result);


    // int arr[]={1,5,3,7,9,10,45,89,100,110};
    // int largest=0;
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int result=findlargestElement(arr,largest,size);
    // printf("Largest Element is :%d",result);


    int arr[10]={1,2,3,4,5};
    for(int i=0;i<5;i++){
 printf("%d\t",arr[i]);
    }
    printf("\n");
   
    int size=5;
    int element=99;
    inserElement(arr,size,element);
    size++;
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    
return 0;
}
//in an  array of numbers,find how many times does a number 'x occures

// int countofnumbers(int arr[],int x,int size){
//     int count=0;
//     for(int i=0;i<size;i++){
        
//         if(arr[i]==x){
//             count++;
//         }
//     }
//     return count;
// }
//write a program to print the largest number in an array

// int findlargestElement(int arr[],int largest,int size){
//   for(int i=0;i<size;i++){
//     if(arr[i]>largest){
//         largest=arr[i];
//     }
//   }
//   return largest;

// }
// write a program to insert an element at the end of an array
void inserElement(int arr[],int size,int element){
    arr[size]=element;
   
    
}