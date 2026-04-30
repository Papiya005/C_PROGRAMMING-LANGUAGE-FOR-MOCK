// write a function to print "Hot " ot "cold" depend on the temperature user enters
#include<stdio.h>
void printHorC(int temp);
int main(){
    int temp;
    printf("Enter the temperature for chacking its hot or cold :");
    scanf("%d",&temp);
    printf("the temperature is %d so ",temp);
    printHorC(temp);
    return 0;

}
void printHorC(int temp){
if(temp<15){
    printf("Its too cold");
}
else if(temp>15){
    printf("its hot");
}
}