#include"stdio.h"
int main(){
    int a , b ,c ;
    printf("Enter the value of 'a' ,'b'and 'c':");
    scanf("%d %d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is graetest of them : ");
        }
        else{
            printf("c is greatest : ");
        }
    }
    else{
        if(b>c){
            printf("b is greatest of them : ");
        }
        else{
            printf("c is greatest of them :");
        }
    }
    return 0;
}