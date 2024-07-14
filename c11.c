#include"stdio.h"
int main(){
    int n;
    printf("enter the marks : ");
    scanf("%d",&n);
    if(n>91 && n<100){
      printf("EXCELLENT");
    }
    else if(n>81 && n<90){
      printf("VERY GOOD");
    }
    else if(n>71 && n<80){
      printf("GOOD");
    }
    else if(n>61 && n<70){
      printf("CAN DO BETTER");
    }
    else if(n>51 && n<60){
      printf("AVERAGE");
    }
    else if(n>40 && n<50){
      printf("BELOW AVERAGE\n");
    }
    else{
      printf("FAIL");
    }
    return 0;

}