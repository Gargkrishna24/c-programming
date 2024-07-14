#include"stdio.h"
#include"math.h"
int root(int a ){
    return a*a;
}
int main(){
    int a ;
    printf("enter the value of 'a' : ");
    scanf("%d",&a);
    int square = root(a);
    int power = pow(2,5); 
    printf("Square of a given number : %d\n", square);
    return 0 ;
}