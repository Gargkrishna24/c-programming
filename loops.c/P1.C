#include"stdio.h"
    int main(){
    int x;
    printf("enter the value of x =  ");
    scanf("%d",&x);
    if(x%5==0){
        printf("entered number is divided by 5 ");
    }
    else{
        printf("entered number is invalid ");
    }
    return 0;
    }
