#include"stdio.h"
int main(){
    // int a[5]={2,3,6,8,10};
    // a[4]=100;
    // printf("%d",a[-1]);
    // float a[3] = {1,2,3};
    // printf("%f",a[2]);
    // char a[5]={'a','n','p','q','r'};
    // printf("%c\n",a[3]);
    // printf("%c %c %c %c %c ",a[0],a[1],a[2],a[3],a[4]);
    int arr[5],i;
    for(int i =0;i<=4;i++){
        printf("\n enter the  element of index of %d: ",i+1);
        scanf(" %d", &arr[i]); 
    }
    for(int i =0;i<=4;i++) printf("element of index %d : %d \n ",i ,arr[i]);
    return 0;
}