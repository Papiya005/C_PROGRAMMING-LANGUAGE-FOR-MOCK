//  practice question 42.
// // write a function to count the number of odd numbers in an array
// #include<stdio.h>
// // declarethe function prototype
// int printNumberOfOdd(int arr[], int n);

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int result=printNumberOfOdd(arr,6);
//     printf(" total odd number inside an array is :%d",result);
//     return 0;

// }
//  int printNumberOfOdd(int arr[], int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2!=0){
//           count++;  

//         }

//     }

//    return count;


// }

// write a function to reverse an array
#include<stdio.h>
//declaring the prototype
void printReverseArray(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printReverseArray(arr,10);
    return 0;

}
void printReverseArray(int arr[],int n){
   
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }

}