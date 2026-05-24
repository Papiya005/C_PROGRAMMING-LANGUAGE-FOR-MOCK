// Standar Library Functions
// strlen()
#include<stdio.h>
#include<string.h>
int main(){
    char name[]="papiya";
    int length=strlen(name);

   printf("%d",length);
   printf("\n");
   
   //strcpy
   char oldstr[]="oldstr";
   char newstr[]="newstr";
   strcpy(newstr,oldstr);
   printf(newstr);
   printf("\n");
   // string concatenation
   char firstname[100]="Papiya ";
   char secname[]="Dutta";
   strcat(firstname,secname);
   printf(firstname);
   int len=strlen(firstname);
   printf("\n");
   printf("%d",len);
   //strcmp
   char name1[]="Apple";
   char name2[]="Banana";
   printf("\n");
   printf("%d",strcmp(name1,name2));

return 0;

}

