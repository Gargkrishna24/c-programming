#include"stdio.h"
int main(){
int m , n , r;
printf("enter the value of m :");
scanf("%d",&m);
printf("enter the value of n :");
scanf("%d",&n);
if(m>=1 && n<=16){
    r=(m*n)/2;
}
printf("%d",r);
return 0;
}

