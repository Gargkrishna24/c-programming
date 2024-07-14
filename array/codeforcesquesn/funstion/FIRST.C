#include"stdio.h"
int add(int a , int b){
    return a+b;
}
int minimum(int a , int b){
    int min = b;
    if(a>b) printf("'a' is greater than 'b': \n ");
    else printf("'b' is greater than 'a': \n ");
    return min ;
}
int product(int a , int b){
    return a*b;
}
int main(){
    int a ,b;
    printf("Enter the value of 'a' : ");
    scanf("%d",&a);
    printf("Enter the value of 'b' : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("The Sum of the given numbers: ");
    printf("%d\n",sum);
    int min = minimum(a,b);
    printf("product of given numbers :r ");
    int c =product(a,b);
    printf("%d",c);

    return 0;
}