#include"stdio.h"
int main(){
    int a , b , c ;
    printf("enter the size of 'a' ,'b'and 'c' : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c<b && b+c<a){
        printf("valid data");
    }
    else{
        printf("invalid data ");
    }
    return 0;
}