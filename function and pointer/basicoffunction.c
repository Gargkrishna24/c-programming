#include"stdio.h"
void greet(){
    printf("good morning \n");
    printf("how are you?\n");  // external function
    return ;  // function ko finish kar deena
}
int main(){ // code starts from main
    greet();
    greet();
    return 0;
}