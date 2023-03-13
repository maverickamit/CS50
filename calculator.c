#include <stdio.h>

int main(void)
{
    long long x;
    printf("x: ");
    scanf("%lld", &x);

    long long y;
    printf("y: ");
    scanf("%lld", &y);

    double z = (double)x / (double)y;
    printf("answer: %0.20f\n", z);
}