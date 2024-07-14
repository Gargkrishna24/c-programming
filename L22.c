#include"stdio.h"
int main(){
    int n,sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    //1-2+3-4+5-6+7+....n terms
    for(int i;i<=n;i++){
        if(n%2!=0) sum =sum+i;
        else sum=sum-i;
    }
    printf("%d",sum);
    return 0;
}