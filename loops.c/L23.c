#include"stdio.h"
int main(){
    int n , product=1;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(int i =1; i<=n;i++){
        product = product*i;
        printf("the factorial of %d is : %d\n",i,product);

    }
    return 0;
}