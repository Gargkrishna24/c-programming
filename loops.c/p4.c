#include"stdio.h"
int main(){
    int n;
    printf("enter the positive integer : ");
    scanf("%d",&n);
    if(n>99 &&n<1000){
        printf("entered number is three digit number");
    }
    else{
        printf("entered nuber is not three digit number ");
    }
}