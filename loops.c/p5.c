#include"stdio.h"
int main(){
    int n ;
    printf("Enter the value of n ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("valid number");
    }
    else{
        printf("invalid data");
    }
}