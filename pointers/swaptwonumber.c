#include<stdio.h>
void swap(int a,int b);
int main(){
    int a=3;
    int b=5;
    swap(a,b);
    printf("swapping of :%d %d\n",a,b);
    return 0;

}
void swap(int a,int b){
   int temp=a;
   a=b;
   b=temp; 
   printf("after swapping :%d %d\n",a,b);
}
//a=a+b;
//b=a-b;
//a=a-b;
//