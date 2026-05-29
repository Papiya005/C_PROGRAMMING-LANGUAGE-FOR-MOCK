//make a structure to store bank account information of a customer of ABC bank .Also ,make an alias it

#include<stdio.h>
//declare the structure
 typedef struct  BankInfo{//structure member
    char name[100];
    int accno;
   

}bankAccInfo;
int main(){
    bankAccInfo customer;
    printf("Enter Accountholder name:");
    fgets(customer.name,100,stdin);
    bankAccInfo accno;
    printf("enter accountno:");
    scanf("%d",&customer.accno);
    //printed statement
    printf("The Accounholder name is:%s\n",customer.name);
    printf("The Accounholder account no is:%d",customer.accno);
    
return 0;
   
}