//create a structure to store vectors.then make a  function to return sum of 2 vectors
#include<stdio.h>
struct vectorSum{
    int x;
    int y;
};
//declare the function prototype
void Sum(struct vectorSum v1,struct vectorSum v2,struct vectorSum  sum);
int main(){
    struct vectorSum v1={2,10};
    struct vectorSum v2={3,7};
     struct vectorSum  sum={0};
     Sum(v1,v2,sum);
    return 0;
}
void Sum(struct vectorSum v1,struct vectorSum v2,struct vectorSum  sum){
   sum.x=v1.x+v2.x;
   sum.y=v1.y+v2.y;
   printf("The vector sum is :(%d,%d)",sum.x,sum.y);

}