  #include"stdio.h"
  int main(){
    int n ,  a=0;
    printf("enter the number : ");
     scanf("%d ",&n);
     for(int i = 2 ;i<=n-1 ;i++){
        if(n%i==0){
          a=1;
            break;
        }
     }
     if(n==1) printf(" 1 is neither is prime nor composite : ");
     else if(a==0) printf(" entered number is prime number \n");
     else printf("entered numbered number is composite number ");
    return 0;
  }