#include"stdio.h"
int main(){
    int sp , cp ,P,L;
    printf("enter the sp: ");
    scanf("%d",&sp);
    printf("enter the  cp : ");
    scanf("%d",&cp);
    P=sp-cp;
    L=cp-sp;
    if(sp>cp){
        printf("we got profit of :%d",P);
    }
    else{
        printf("we got a loss of %d ",L);
    }
    return 0;
}