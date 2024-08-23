// Resolvido por: Joaquim R. Debiasi e Pedro Molinaro

#include <stdio.h>

int main()
{

    int tempo, velocidade;
    float km, gasto;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    km = tempo * velocidade;

    gasto = km / 12;

    printf("%.3f\n", gasto);
    return 0;
}
