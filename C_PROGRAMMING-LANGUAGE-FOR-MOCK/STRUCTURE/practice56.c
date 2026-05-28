// Enter address (house no,block,city,state)of 5 people
#include<stdio.h>
#include<string.h>
//declare the stutcture
 typedef struct peopleInformation{
   int houseno;
   int blockno;
   char city[100];
   char state[100];
}peoInfo;
//declare the function prototype
int main(){
  peoInfo p1={123,111,"Durgapur","Westbengal"};
 
 printf("\n First people add :\n");
 
 printf("House no :%d\n",p1.houseno);
 printf("Block no :%d\n",p1.blockno);
 printf("City Name :%s\n",p1.city);
 printf("State name no :%s\n",p1.state);
 
  peoInfo p2={124,112,"Howrah","Westbengal"};
  printf("\n Second people add :\n");
 
 printf("House no :%d\n",p2.houseno);
 printf("Block no :%d\n",p2.blockno);
 printf("City Name :%s\n",p2.city);
 printf("State name no :%s\n",p2.state);

  peoInfo p3={125,113,"Kolkata","Westbengal"};
  printf("\n Third people add :\n");
 
 printf("House no :%d\n",p3.houseno);
 printf("Block no :%d\n",p3.blockno);
 printf("City Name :%s\n",p3.city);
 printf("State name no :%s\n",p3.state);

  peoInfo p4={126,114,"Delhi","Uttarpradesh"};
  printf("\n Fouth people add :\n");
 
 printf("House no :%d\n",p4.houseno);
 printf("Block no :%d\n",p4.blockno);
 printf("City Name :%s\n",p4.city);
 printf("State name no :%s\n",p4.state);

  peoInfo p5={127,115,"Mumbai","Maharashtra"};
  printf("\n Fifth people add :\n");
 
 printf("House no :%d\n",p5.houseno);
 printf("Block no :%d\n",p5.blockno);
 printf("City Name :%s\n",p5.city);
 printf("State name no :%s\n",p5.state);
 return 0;
}
