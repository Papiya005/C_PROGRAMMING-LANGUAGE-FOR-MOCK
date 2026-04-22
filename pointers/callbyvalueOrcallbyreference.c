#include<stdio.h>
// declare the prototype
void square(int n);
int main(){
    int n=4;
    printf("square of %d\n",n);
    square(n);
    return 0;

}
void square(int n)
{
  n=n*n;
 printf("square of %d\n",n);   
}
