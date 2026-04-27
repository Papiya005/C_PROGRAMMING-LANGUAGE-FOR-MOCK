// // 2d arrays
// #include<stdio.h>
// int main(){
    
//    int arr[2][3];
//    //1st row
//    arr[0][0]=1;
//    arr[0][1]=2;
//    arr[0][2]=3;
//    //2nd row
//    arr[1][0]=4;
//    arr[1][1]=5;
//    arr[1][2]=6;
//    //output
//    printf("%d",arr[0][0]);

//     return 0;

// }
// practice question 42.
// write a function to count the number of odd numbers in an array
#include<stdio.h>
// declarethe function prototype
int printNumberOfOdd(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    int result=printNumberOfOdd(arr,6);
    printf(" total odd number inside an array is :%d",result);
    return 0;

}
 int printNumberOfOdd(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
          count++;  

        }

    }

   return count;


}