//write a program to enter price of 3 items and print their final cost with gst
#include<stdio.h>
// declare the prototype
void printFinalCostWithgst(float price[]);
int main(){
    float price[3];
     printFinalCostWithgst(price);
     return 0;
}
void printFinalCostWithgst(float price[]){
    //first item price
 scanf("%f",&price[0]);
 //second item price
 scanf("%f",&price[1]);
 //third item price
 scanf("%f",&price[2]);
 float finalCost=price[0]+price[1]+price[2];
 printf(" Finalcost is :%.2f\n",finalCost);
 float PriceWithGst=finalCost+(finalCost*18/100);
 printf("%.2f",PriceWithGst);


}