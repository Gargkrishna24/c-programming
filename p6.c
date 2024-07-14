#include "stdio.h"
int main()
{
    int p, q, r;
    printf("enter the value of p , q, r : ");
    scanf("%d %d %d ", &p, &q, &r);
    if (p > q && p > r)
    {
        printf(" %d is greatest of them ",p);
    }
    if (q > p && q > r)
    {
        printf("%d  is gratest of them ",q);
    }
    if(r>p && r>q)
    {
        printf("%d  is graetest of them ",r);
    }
    return 0;
}