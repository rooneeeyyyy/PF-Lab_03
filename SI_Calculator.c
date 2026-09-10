#include <stdio.h>

int main()
{
    float p, r, t, Si;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter interest rate: ");
    scanf("%f", &r);
    r = r/100;

    printf("Enter time period: ");
    scanf("%f", &t);

    Si = (p * r * t) / 100;
    printf("\nSimple Interest = %.2f\n", Si);

    return 0;
}