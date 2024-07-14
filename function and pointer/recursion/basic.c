#include"stdio.h"// recursion i function calling itself
int factorial(int n ){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int a =5 ;
    int b = factorial(a);
    printf("%d",b);

    return 0 ;
}