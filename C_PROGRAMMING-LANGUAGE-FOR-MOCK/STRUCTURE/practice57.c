//create a structure to store vectors.then make a  function to return sum of 2 vectors
#include<stdio.h>
#include<math.h>
struct vectorSum{
    int x;
    int y;
};
//declare the function prototype
void Sum(struct vectorSum v1,struct vectorSum v2,struct vectorSum  sum);
//for calculating magnitude

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
   printf("The vector sum is :(%d,%d)\n",sum.x,sum.y);
   //magnitude
   float magnitude=sqrt((sum.x*sum.x)+(sum.y*sum.y));
   printf("The magnitude of that particular vector is :%f",magnitude);

}

