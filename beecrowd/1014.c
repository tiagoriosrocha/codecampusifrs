// Resolvido por: Joaquim R. Debiasi e Pedro Molinaro

#include <stdio.h>

int main()
{

    int X;
    float Y, km;

    scanf("%d", &X);
    scanf("%f", &Y);

    km = X / Y;

    printf("%.3f km/l\n", km);

    return 0;
}