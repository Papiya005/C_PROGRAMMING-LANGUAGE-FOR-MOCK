#include<stdio.h>

int printpowerfunction(int x,int n);

int main(){
    int x = 2;
    int n = 5;

    printf("%d", printpowerfunction(x,n));
    return 0;
}

int printpowerfunction(int x,int n){
    if(n == 0){
        return 1;
    }
    // when even
    if(n%2==0)
    return printpowerfunction(x,n/2)*printpowerfunction(x,n/2);
    // odd 
    else{
        return x * printpowerfunction(x,n/2)* printpowerfunction(x,n/2);
    }
}