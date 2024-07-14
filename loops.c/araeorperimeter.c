#include"stdio.h"
int main(){
    int l , b;
    printf("enter the lenght of a rectangle : ");
    scanf("%d",&l);
    printf("enter the value of b : ");
    scanf("%d",&b);
    int area = l*b;
    int peri = (2*l)+(2*b);
    if(area>peri){
        printf("area is greater than perimeter : %d",area);
    }
    else{
        printf("peri is greater than area :%d ",peri);
    }
    

}