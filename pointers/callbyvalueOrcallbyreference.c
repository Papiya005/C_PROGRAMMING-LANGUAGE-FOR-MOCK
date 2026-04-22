#include<stdio.h>
// declare the prototype
void square(int n);
void square1(int* n);
int main(){
    int n=4;
    
    square(n);
    printf("square of %d\n",n);
    
     square1( &n);
    printf("square of %d\n",n);
    return 0;

}
void square(int n)
{
  n=n*n;
 printf("square of %d\n",n);   
}
void square1(int* n){
 *n=(*n)*(*n);
 printf("square of %d \n", *n);  
}

    // cal by reference
    // when we the address of variables as an argumanets then we called it "call by refernece";