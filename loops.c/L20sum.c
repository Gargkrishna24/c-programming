#include"stdio.h"
int main(){
    int n ,sum =0 ,ld;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("%d ",sum);
    return 0;
}