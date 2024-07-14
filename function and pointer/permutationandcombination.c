#include <stdio.h>

int main() {
    int n, r, nfact = 1, rfact = 1, nrfact = 1;

    printf("Enter r: ");
    scanf("%d", &r);

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        nfact *= i;
    }

    for (int i = 2; i <= r; i++) {
        rfact *= i;
    }

    for (int i = 2; i <= n - r; i++) {
        nrfact *= i;
    }

    int ncr = nfact / (rfact * nrfact);

    printf("%d\n", ncr);

    return 0;
}
