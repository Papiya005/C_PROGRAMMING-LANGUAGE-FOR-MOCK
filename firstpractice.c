// write a function that prints namaste if user is indian & bonjour if the user is french
void printregion(char* user){
   
    if(user=="Indian"){
        printf("Namaste");
    }
    else if(user=="French"){
        printf("Bonjour");
    }
}
int main(){
 char* user="French";
 printregion(user); 
}
