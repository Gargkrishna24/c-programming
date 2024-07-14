#include"stdio.h"
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("valid number");
        }
        else{
            printf("invalid data");
        }
    }
    else{
        printf("incorrect data ");
    }
    return 0;
}