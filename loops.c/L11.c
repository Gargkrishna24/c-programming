#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = 100;
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", a); // Add a space after each value
        a = a - 3;
    }

    return 0;
}
