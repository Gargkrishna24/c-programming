#include"stdio.h"
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i =0 ; i<=n ;i++){
        if(i%2!=0) {
            continue;
        }
        printf("%d \n",i);
    }
    return 0;
}