#include"stdio.h"
int main(){
    int n ;
    printf("enter the value of n :");
    scanf("%d ",&n);
    int a = 3;

    for(int i =1 ;i<=n;i=i+1){ 
        printf(" %d",a);
         a=a*4;
    }

    return 0;
}