// //  practice question 42.
// // // write a function to count the number of odd numbers in an array
// // #include<stdio.h>
// // // declarethe function prototype
// // int printNumberOfOdd(int arr[], int n);

// // int main(){
// //     int arr[]={1,2,3,4,5,6};
// //     int result=printNumberOfOdd(arr,6);
// //     printf(" total odd number inside an array is :%d",result);
// //     return 0;

// // }
// //  int printNumberOfOdd(int arr[], int n){
// //     int count=0;
// //     for(int i=0;i<n;i++){
// //         if(arr[i]%2!=0){
// //           count++;  

// //         }

// //     }

// //    return count;


// // }

// // write a function to reverse an array
// // #include<stdio.h>
// // //declaring the prototype
// // void printReverseArray(int arr[],int n);
// // int main(){
// //     int arr[]={1,2,3,4,5,6,7,8,9,10};
// //     printReverseArray(arr,10);
// //     return 0;

// // }
// // void printReverseArray(int arr[],int n){
   
// //     for(int i=n-1;i>=0;i--){
// //         printf("%d\t",arr[i]);
// //     }

// // }
// // swapping the array without using any extra space
// #include<stdio.h>
// //declare the function prototype
// void printSwapp(int arr[],int n);
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     printSwapp(arr,10);
//     for(int i=0;i<10;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;

// }
// void printSwapp(int arr[],int n){
//         int st=0;
//         int end=n-1;
//         while(st<=end){
//        int temp=arr[st];
//         arr[st]=arr[end];
//         arr[end]=temp;
//         st++;
//         end--;
        
       
//     }
// }

//print fibonacci series upto nth using recursion and iteration
//using recursion
// #include<stdio.h>
// //declare the function prototype
// int printFibonacci(int n);
// int main(){
//     int n;
//     scanf("%d",&n);
// int result=printFibonacci(n);
// printf("%d\t",result);
//     return 0;

// }
// int printFibonacci(int n){
//     //base case
//   if(n==0){
//     return 0;
//   }
//   if(n==1){
//     return 1;
//   }
//     //important logic
    
//      return printFibonacci(n-1)+printFibonacci(n-2);
// }
// using iteration
// #include<stdio.h>
// //declare the prototype

// int main(){
//     int n;
//     printf("enter n (n>2):");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;
//     for(int i=2;i<n;i++){
//       fib[i]=fib[i-1]+fib[i-2];//important logic
//       printf("%d\t",fib[i]);
//     }
//     return 0;

// }


//print the table about 2&3
#include<stdio.h>
//prototype declaretion
void printTable(int arr[][10],int n,int m,int number);
int main(){
    int arr[2][10];
    printTable(arr,0,10,2);
     printTable(arr,1,10,3);
     //print or first row
   for(int i=0;i<10;i++){
    printf("%d\t",arr[0][i]);
   }
   printf("\n");
   for(int i=0;i<10;i++){
    printf("%d\t",arr[1][i]);
   }
return 0;
}
void printTable(int arr[][10],int n,int m,int number){
  for(int i=0;i<m;i++){
  arr[n][i]=number*(i+1);
  }
}